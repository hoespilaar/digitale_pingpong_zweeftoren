#include "mcc_generated_files/pwm/pwm6.h"
#include "adcMeasurements.h"
#include "mcc_generated_files/system/system.h"
#include "controller.h"


bool buzzing = false;
static uint16_t counter = 0;

void check_push_up(void) {
    if (buzzing == false){

       if (getPomphoogte() >= 450) {
        PWM_buzzer_LoadDutyValue(400); //output PWM signaal
        buzzing = true;
        counter += 1;
        setSetpoint(45 + counter * 50);
        __delay_ms(20);
        }   

       PWM_buzzer_LoadDutyValue(0); //output PWM signaal
    } else {
        if (getPomphoogte() <= 350) {
            buzzing = false;
        }
    }
}


uint16_t getCounter(void) {return counter;}