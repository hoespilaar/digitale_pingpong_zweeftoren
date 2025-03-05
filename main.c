 /*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.2
 *
 * @version Package Version: 3.1.2
*/

/*
� [2025] Microchip Technology Inc. and its subsidiaries.

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
#include <stddef.h>

#include "mcc_generated_files/system/system.h"
#include "mcc_generated_files/system/pins.h"
#include "mcc_generated_files/adc/adc.h"
#include "adcMeasurements.h"
#include "UART.h"
#include "mcc_generated_files/timer/tmr4.h"
#include "controller.h"
#include "mcc_generated_files/timer/tmr6.h"
#include "ledstrip.h"
#include "mcc_generated_files/pwm/pwm6.h"

/*
    Main application
*/
bool  buzzing = false;
int main(void)
{
    SYSTEM_Initialize();
    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts 
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts 
    // Use the following macros to: 

    // Enable the Global Interrupts 
    INTERRUPT_GlobalInterruptEnable(); 

    // Disable the Global Interrupts 
    //INTERRUPT_GlobalInterruptDisable(); 

    // Enable the Peripheral Interrupts 
    INTERRUPT_PeripheralInterruptEnable(); 

    // Disable the Peripheral Interrupts 
    //INTERRUPT_PeripheralInterruptDisable(); 

    initAdcMultiplexer();
    tmr_controller_OverflowCallbackRegister(controller);
    initLedstrip();
    
    uint8_t counter = 0;
    
    while(1)
    {
        uartHandler();
        
        if (buzzing == false){
           
           if (getPomphoogte() >= 450) {
            PWM_buzzer_LoadDutyValue(50); //output PWM signaal
            buzzing = true;
            counter += 1;
            __delay_ms(20);
            }   
           
           PWM_buzzer_LoadDutyValue(0); //output PWM signaal
        } else {
            if (getPomphoogte() <= 350) {
                buzzing = false;
            }
        }
        
        __delay_ms(1); //korte delay voor zichtbaar effect
        
        // print
        printLogs();
        
        setSetpoint(45 + counter * 50);
        char str[20];
        sprintf(str, "counter: %u\n\r", counter);
        printOut(str);
        
        tmr_ledstrip_Tasks();
    }    
}