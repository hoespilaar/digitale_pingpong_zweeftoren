/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.0.0
*/

/*
© [2025] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA0 aliases
#define ledstrip_in_TRIS                 TRISAbits.TRISA0
#define ledstrip_in_LAT                  LATAbits.LATA0
#define ledstrip_in_PORT                 PORTAbits.RA0
#define ledstrip_in_WPU                  WPUAbits.WPUA0
#define ledstrip_in_OD                   ODCONAbits.ODCA0
#define ledstrip_in_ANS                  ANSELAbits.ANSA0
#define ledstrip_in_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define ledstrip_in_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define ledstrip_in_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define ledstrip_in_GetValue()           PORTAbits.RA0
#define ledstrip_in_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define ledstrip_in_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define ledstrip_in_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define ledstrip_in_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define ledstrip_in_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define ledstrip_in_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define ledstrip_in_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define ledstrip_in_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)
// get/set IO_RA1 aliases
#define LED_D5_TRIS                 TRISAbits.TRISA1
#define LED_D5_LAT                  LATAbits.LATA1
#define LED_D5_PORT                 PORTAbits.RA1
#define LED_D5_WPU                  WPUAbits.WPUA1
#define LED_D5_OD                   ODCONAbits.ODCA1
#define LED_D5_ANS                  ANSELAbits.ANSA1
#define LED_D5_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define LED_D5_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define LED_D5_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define LED_D5_GetValue()           PORTAbits.RA1
#define LED_D5_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define LED_D5_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define LED_D5_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define LED_D5_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define LED_D5_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define LED_D5_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define LED_D5_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define LED_D5_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)
// get/set IO_RA2 aliases
#define LED_D6_TRIS                 TRISAbits.TRISA2
#define LED_D6_LAT                  LATAbits.LATA2
#define LED_D6_PORT                 PORTAbits.RA2
#define LED_D6_WPU                  WPUAbits.WPUA2
#define LED_D6_OD                   ODCONAbits.ODCA2
#define LED_D6_ANS                  ANSELAbits.ANSA2
#define LED_D6_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LED_D6_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LED_D6_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LED_D6_GetValue()           PORTAbits.RA2
#define LED_D6_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LED_D6_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LED_D6_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define LED_D6_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define LED_D6_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define LED_D6_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define LED_D6_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define LED_D6_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)
// get/set IO_RA5 aliases
#define LED_D4_TRIS                 TRISAbits.TRISA5
#define LED_D4_LAT                  LATAbits.LATA5
#define LED_D4_PORT                 PORTAbits.RA5
#define LED_D4_WPU                  WPUAbits.WPUA5
#define LED_D4_OD                   ODCONAbits.ODCA5
#define LED_D4_ANS                  ANSELAbits.ANSA5
#define LED_D4_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define LED_D4_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define LED_D4_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define LED_D4_GetValue()           PORTAbits.RA5
#define LED_D4_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define LED_D4_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define LED_D4_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define LED_D4_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define LED_D4_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define LED_D4_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define LED_D4_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define LED_D4_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)
// get/set IO_RB4 aliases
#define ledstrip_out_TRIS                 TRISBbits.TRISB4
#define ledstrip_out_LAT                  LATBbits.LATB4
#define ledstrip_out_PORT                 PORTBbits.RB4
#define ledstrip_out_WPU                  WPUBbits.WPUB4
#define ledstrip_out_OD                   ODCONBbits.ODCB4
#define ledstrip_out_ANS                  ANSELBbits.ANSB4
#define ledstrip_out_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define ledstrip_out_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define ledstrip_out_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define ledstrip_out_GetValue()           PORTBbits.RB4
#define ledstrip_out_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define ledstrip_out_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define ledstrip_out_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define ledstrip_out_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define ledstrip_out_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define ledstrip_out_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define ledstrip_out_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define ledstrip_out_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)
// get/set IO_RB5 aliases
#define UART_RX_TRIS                 TRISBbits.TRISB5
#define UART_RX_LAT                  LATBbits.LATB5
#define UART_RX_PORT                 PORTBbits.RB5
#define UART_RX_WPU                  WPUBbits.WPUB5
#define UART_RX_OD                   ODCONBbits.ODCB5
#define UART_RX_ANS                  ANSELBbits.ANSB5
#define UART_RX_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define UART_RX_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define UART_RX_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define UART_RX_GetValue()           PORTBbits.RB5
#define UART_RX_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define UART_RX_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define UART_RX_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define UART_RX_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define UART_RX_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define UART_RX_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define UART_RX_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define UART_RX_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)
// get/set IO_RB6 aliases
#define ledstrip_clk_TRIS                 TRISBbits.TRISB6
#define ledstrip_clk_LAT                  LATBbits.LATB6
#define ledstrip_clk_PORT                 PORTBbits.RB6
#define ledstrip_clk_WPU                  WPUBbits.WPUB6
#define ledstrip_clk_OD                   ODCONBbits.ODCB6
#define ledstrip_clk_ANS                  ANSELBbits.ANSB6
#define ledstrip_clk_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define ledstrip_clk_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define ledstrip_clk_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define ledstrip_clk_GetValue()           PORTBbits.RB6
#define ledstrip_clk_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define ledstrip_clk_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define ledstrip_clk_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define ledstrip_clk_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define ledstrip_clk_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define ledstrip_clk_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define ledstrip_clk_SetAnalogMode()      do { ANSELBbits.ANSB6 = 1; } while(0)
#define ledstrip_clk_SetDigitalMode()     do { ANSELBbits.ANSB6 = 0; } while(0)
// get/set IO_RB7 aliases
#define UART_TX_TRIS                 TRISBbits.TRISB7
#define UART_TX_LAT                  LATBbits.LATB7
#define UART_TX_PORT                 PORTBbits.RB7
#define UART_TX_WPU                  WPUBbits.WPUB7
#define UART_TX_OD                   ODCONBbits.ODCB7
#define UART_TX_ANS                  ANSELBbits.ANSB7
#define UART_TX_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define UART_TX_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define UART_TX_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define UART_TX_GetValue()           PORTBbits.RB7
#define UART_TX_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define UART_TX_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define UART_TX_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define UART_TX_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define UART_TX_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define UART_TX_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define UART_TX_SetAnalogMode()      do { ANSELBbits.ANSB7 = 1; } while(0)
#define UART_TX_SetDigitalMode()     do { ANSELBbits.ANSB7 = 0; } while(0)
// get/set IO_RC0 aliases
#define potentiometer_TRIS                 TRISCbits.TRISC0
#define potentiometer_LAT                  LATCbits.LATC0
#define potentiometer_PORT                 PORTCbits.RC0
#define potentiometer_WPU                  WPUCbits.WPUC0
#define potentiometer_OD                   ODCONCbits.ODCC0
#define potentiometer_ANS                  ANSELCbits.ANSC0
#define potentiometer_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define potentiometer_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define potentiometer_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define potentiometer_GetValue()           PORTCbits.RC0
#define potentiometer_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define potentiometer_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define potentiometer_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define potentiometer_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define potentiometer_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define potentiometer_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define potentiometer_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define potentiometer_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)
// get/set IO_RC2 aliases
#define hoogtesensor_TRIS                 TRISCbits.TRISC2
#define hoogtesensor_LAT                  LATCbits.LATC2
#define hoogtesensor_PORT                 PORTCbits.RC2
#define hoogtesensor_WPU                  WPUCbits.WPUC2
#define hoogtesensor_OD                   ODCONCbits.ODCC2
#define hoogtesensor_ANS                  ANSELCbits.ANSC2
#define hoogtesensor_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define hoogtesensor_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define hoogtesensor_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define hoogtesensor_GetValue()           PORTCbits.RC2
#define hoogtesensor_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define hoogtesensor_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define hoogtesensor_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define hoogtesensor_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define hoogtesensor_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define hoogtesensor_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define hoogtesensor_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define hoogtesensor_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)
// get/set IO_RC3 aliases
#define pomphoogte_TRIS                 TRISCbits.TRISC3
#define pomphoogte_LAT                  LATCbits.LATC3
#define pomphoogte_PORT                 PORTCbits.RC3
#define pomphoogte_WPU                  WPUCbits.WPUC3
#define pomphoogte_OD                   ODCONCbits.ODCC3
#define pomphoogte_ANS                  ANSELCbits.ANSC3
#define pomphoogte_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define pomphoogte_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define pomphoogte_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define pomphoogte_GetValue()           PORTCbits.RC3
#define pomphoogte_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define pomphoogte_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define pomphoogte_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define pomphoogte_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define pomphoogte_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define pomphoogte_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define pomphoogte_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define pomphoogte_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)
// get/set IO_RC5 aliases
#define pwm_ventilator_TRIS                 TRISCbits.TRISC5
#define pwm_ventilator_LAT                  LATCbits.LATC5
#define pwm_ventilator_PORT                 PORTCbits.RC5
#define pwm_ventilator_WPU                  WPUCbits.WPUC5
#define pwm_ventilator_OD                   ODCONCbits.ODCC5
#define pwm_ventilator_ANS                  ANSELCbits.ANSC5
#define pwm_ventilator_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define pwm_ventilator_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define pwm_ventilator_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define pwm_ventilator_GetValue()           PORTCbits.RC5
#define pwm_ventilator_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define pwm_ventilator_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define pwm_ventilator_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define pwm_ventilator_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define pwm_ventilator_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define pwm_ventilator_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define pwm_ventilator_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define pwm_ventilator_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)
// get/set IO_RC6 aliases
#define pompled_TRIS                 TRISCbits.TRISC6
#define pompled_LAT                  LATCbits.LATC6
#define pompled_PORT                 PORTCbits.RC6
#define pompled_WPU                  WPUCbits.WPUC6
#define pompled_OD                   ODCONCbits.ODCC6
#define pompled_ANS                  ANSELCbits.ANSC6
#define pompled_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define pompled_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define pompled_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define pompled_GetValue()           PORTCbits.RC6
#define pompled_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define pompled_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define pompled_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define pompled_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define pompled_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define pompled_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define pompled_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define pompled_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)
// get/set IO_RC7 aliases
#define buzzer_TRIS                 TRISCbits.TRISC7
#define buzzer_LAT                  LATCbits.LATC7
#define buzzer_PORT                 PORTCbits.RC7
#define buzzer_WPU                  WPUCbits.WPUC7
#define buzzer_OD                   ODCONCbits.ODCC7
#define buzzer_ANS                  ANSELCbits.ANSC7
#define buzzer_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define buzzer_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define buzzer_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define buzzer_GetValue()           PORTCbits.RC7
#define buzzer_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define buzzer_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define buzzer_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define buzzer_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define buzzer_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define buzzer_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define buzzer_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define buzzer_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)
/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/