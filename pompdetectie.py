import numpy as np
import cv2
import math
import pygame  # Import pygame for playing sound


""" FUNCTIONS """


# Function to draw contours around detected colors and print some text
def draw_contours(mask, color):
    # Find contours in the masked image
    cnts, _ = cv2.findContours(mask.copy(), cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

    # Sort the contours by area (in descending order)
    cnts = sorted(cnts, key=cv2.contourArea, reverse=True)
    
    # Limit the number of contours to 3
    cnts = cnts[:3]

    centers = []
    # Check if any contours are found
    for cnt in cnts:  # Loop through the selected contours
        # Get the radius of the enclosing circle around the contour
        ((x, y), radius) = cv2.minEnclosingCircle(cnt)
        if radius > 10:  # Only consider contours with a significant size (adjust this threshold as needed)
            # Draw the circle around the contour
            color_bgr = color["bgr"]
            cv2.circle(frame, (int(x), int(y)), int(radius), color_bgr, 2)
            
            # Get the moments to calculate the center of the contour
            M = cv2.moments(cnt)
            if M['m00'] != 0:
                center_point = (int(M['m10'] / M['m00']), int(M['m01'] / M['m00']))
                centers.append(center_point)

                # Write text to frame (e.g., color name)
                cv2.putText(frame, str(center_point), center_point, cv2.FONT_HERSHEY_SIMPLEX,
                            0.5, (255, 255, 255), 2, cv2.LINE_AA)

    return centers


# Function to compute the angle between two vectors
def compute_angle(v1, v2):
    # Compute the dot product
    dot_product = np.dot(v1, v2)
    # Compute the magnitudes of the vectors
    magnitude_v1 = np.linalg.norm(v1)
    magnitude_v2 = np.linalg.norm(v2)
    
    # Compute the cosine of the angle
    cosine_angle = dot_product / (magnitude_v1 * magnitude_v2)
    
    # Ensure cosine is within valid range due to floating point errors
    cosine_angle = np.clip(cosine_angle, -1.0, 1.0)
    
    # Compute the angle in radians and then convert to degrees
    angle = np.arccos(cosine_angle)
    angle_degrees = np.degrees(angle)
    
    return angle_degrees


""" MAIN """


# Initialize pygame mixer for sound playback
pygame.mixer.init()

# Load your sound (ensure the sound file is in the same directory or provide the full path)
sound = pygame.mixer.Sound("C:/Users/Pieter/Music/output.wav")  # Replace with your sound file

# Setup webcam feed
cap = cv2.VideoCapture(0)

width = cap.get(3)  # float `width`
height = cap.get(4)

# Define a kernel for morphological operations
kernel = np.ones((5, 5), np.uint8)

# BGR definitions for some colors
green = {"name": 'green', "bgr": [0, 255, 0]}

# Loop to continuously acquire frames from the webcam
while True:

    # Get frame of camera ([camera resolution] x [Blue-green-red])
    _, frame = cap.read()

    # BGR to Hue Saturation Value
    hsv_frame = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)

    low_green = np.array([40, 52, 72])
    high_green = np.array([102, 255, 255])
    green_mask = cv2.inRange(hsv_frame, low_green, high_green)
    green_mask = cv2.erode(green_mask, kernel, iterations=2)
    green_mask = cv2.morphologyEx(green_mask, cv2.MORPH_OPEN, kernel)
    green_mask = cv2.dilate(green_mask, kernel, iterations=1)

    # Get the centers of the green dots
    centers = draw_contours(green_mask, green)

    # If we have 3 centers (representing the 3 green dots), connect them with lines
    if len(centers) == 3:
        # Sort the dots by their X position to determine outer and middle dots
        centers_sorted = sorted(centers, key=lambda x: x[0])

        # Middle dot is in the center
        middle_dot = centers_sorted[1]

        # Outer dots are the first and last (left and right)
        outer_left = centers_sorted[0]
        outer_right = centers_sorted[2]

        # Draw lines connecting the middle dot to the outer dots (left and right)
        cv2.line(frame, middle_dot, outer_left, (0, 255, 255), 2)  # Line to the left outer dot
        cv2.line(frame, middle_dot, outer_right, (0, 255, 255), 2)  # Line to the right outer dot

        # Compute the vectors (middle_dot -> outer_left) and (middle_dot -> outer_right)
        vector_left = np.array([outer_left[0] - middle_dot[0], outer_left[1] - middle_dot[1]])
        vector_right = np.array([outer_right[0] - middle_dot[0], outer_right[1] - middle_dot[1]])

        # Compute the angle between the two vectors
        angle = compute_angle(vector_left, vector_right)

        # Display the angle on the frame
        cv2.putText(frame, f"Angle: {angle:.2f} degrees", (50, 50), cv2.FONT_HERSHEY_SIMPLEX,
                    1, (255, 255, 255), 2, cv2.LINE_AA)

        # Play sound if angle is more than 25 degrees from 180
        if abs(angle - 180) > 25:
            sound.play()

    # Show the frame with the drawn lines
    cv2.imshow("Frame", frame)

    # Exit loop if ESC key is pressed
    if cv2.waitKey(1) & 0xFF == 27:
        break

# Release the capture and destroy all OpenCV windows
cap.release()
cv2.destroyAllWindows()
