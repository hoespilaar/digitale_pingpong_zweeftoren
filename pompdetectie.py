import numpy as np
import cv2
import math
import pygame  # Import pygame for playing sound
import time

""" FUNCTIONS """

# Function to draw contours around detected colors and print some text
def draw_contours(mask, color):
    cnts, _ = cv2.findContours(mask.copy(), cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
    cnts = sorted(cnts, key=cv2.contourArea, reverse=True)[:3]
    centers = []
    for cnt in cnts:
        ((x, y), radius) = cv2.minEnclosingCircle(cnt)
        if radius > 10:
            color_bgr = color["bgr"]
            cv2.circle(frame, (int(x), int(y)), int(radius), color_bgr, 2)
            M = cv2.moments(cnt)
            if M['m00'] != 0:
                center_point = (int(M['m10'] / M['m00']), int(M['m01'] / M['m00']))
                centers.append(center_point)
                cv2.putText(frame, str(center_point), center_point, cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 255), 2, cv2.LINE_AA)
    return centers

# Function to compute the angle between two vectors
def compute_angle(v1, v2):
    dot_product = np.dot(v1, v2)
    magnitude_v1 = np.linalg.norm(v1)
    magnitude_v2 = np.linalg.norm(v2)
    cosine_angle = dot_product / (magnitude_v1 * magnitude_v2)
    cosine_angle = np.clip(cosine_angle, -1.0, 1.0)
    angle = np.arccos(cosine_angle)
    return np.degrees(angle)

""" MAIN """

pygame.mixer.init()
sound = pygame.mixer.Sound("C:/Users/Pieter/Music/corrigeer.mp3")
cap = cv2.VideoCapture(0)
kernel = np.ones((5, 5), np.uint8)
green = {"name": 'green', "bgr": [0, 255, 0]}
last_play_time = 0

while True:
    _, frame = cap.read()
    hsv_frame = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)
    low_green = np.array([40, 52, 72])
    high_green = np.array([102, 255, 255])
    green_mask = cv2.inRange(hsv_frame, low_green, high_green)
    green_mask = cv2.erode(green_mask, kernel, iterations=2)
    green_mask = cv2.morphologyEx(green_mask, cv2.MORPH_OPEN, kernel)
    green_mask = cv2.dilate(green_mask, kernel, iterations=1)
    centers = draw_contours(green_mask, green)

    if len(centers) == 3:
        centers_sorted = sorted(centers, key=lambda x: x[0])
        middle_dot = centers_sorted[1]
        outer_left = centers_sorted[0]
        outer_right = centers_sorted[2]
        cv2.line(frame, middle_dot, outer_left, (0, 255, 255), 2)
        cv2.line(frame, middle_dot, outer_right, (0, 255, 255), 2)
        vector_left = np.array([outer_left[0] - middle_dot[0], outer_left[1] - middle_dot[1]])
        vector_right = np.array([outer_right[0] - middle_dot[0], outer_right[1] - middle_dot[1]])
        angle = compute_angle(vector_left, vector_right)
        cv2.putText(frame, f"Angle: {angle:.2f} degrees", (50, 50), cv2.FONT_HERSHEY_SIMPLEX, 1, (255, 255, 255), 2, cv2.LINE_AA)
        current_time = time.time()
        if abs(angle - 180) > 25 and (current_time - last_play_time) > 3:
            sound.play()
            last_play_time = current_time

    cv2.imshow("Frame", frame)
    if cv2.waitKey(1) & 0xFF == 27:
        break

cap.release()
cv2.destroyAllWindows()
