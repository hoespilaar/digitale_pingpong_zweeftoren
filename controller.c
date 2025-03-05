#include "adcMeasurements.h"
#include "mcc_generated_files/pwm/pwm5.h"

static uint16_t hoogte_bal;
static uint16_t setpoint = 50;
static uint16_t dutycycle; //PWM5 heeft 10 bits resolutie -> neem uint16_t als type

static float integraal = 0;
static int16_t lasterror = 0;

static float kp = 0.9;
static float ki = 4.5;
static float kd = 0;

void controller(void) {
    hoogte_bal = getHoogtesensor(); //resultaat van ADC
    //setpoint = getPotentiometer(); //je kan je setpoint ook ergens anders zetten (dan moet deze lijn uiteraard weg)
    
    // Code om de dutycycle te berekenen adhv de gemeten hoogte en gewenste setpoint
    int16_t error = setpoint - hoogte_bal;
    
    integraal += error * 0.0005;
    int16_t difference = lasterror - error;
    lasterror = error;
    
    int16_t P = kp * error;
    int16_t I = ki * integraal;
    int16_t D = kd * difference;
    
    dutycycle = P + I + D;
    
    if (dutycycle > 1023 && error > 0)  {
        dutycycle = 1023;
    } else if (dutycycle > 1023 && error < 0)  {
        dutycycle = 0;
    } else if (dutycycle < 0) {
        dutycycle = 0;
    }
 
    pwm_fan_LoadDutyValue(dutycycle); //output PWM signaal
}

//getters
uint16_t getSetpoint(void) {return setpoint;}
uint16_t getDutycycle(void) {return dutycycle;}
float getKp(void) {return kp;}
float getKi(void) {return ki;}
float getKd(void) {return kd;}

//setters
void setSetpoint(uint16_t new_setpoint) {setpoint = new_setpoint;}
void setDutycycle(uint16_t new_dutycycle) {dutycycle = new_dutycycle;}
void setKp(float new_kp) {kp = new_kp;}
void setKi(float new_ki) {ki = new_ki;}
void setKd(float new_kd) {kd = new_kd;}
