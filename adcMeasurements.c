#include "mcc_generated_files/adc/adc.h"

volatile uint16_t ADC_potentiometer, ADC_hoogtesensor;

void adcConversionDoneHandler(void) {
    /* static zorgt dat de waarde behouden blijft over functiecalls heen, en dat
     * enkel binnen de functie de waarde aangepast kan worden
     * mogelijke channels staan in Header Files > MCC Generated Files > adc > adc.h
     */
    static adc_channel_t new_channel = potentiometer;
    switch (new_channel) {
        case potentiometer:
            ADC_potentiometer = ADC_GetConversionResult();
            new_channel = hoogtesensor;
            break;
        case hoogtesensor:
            ADC_hoogtesensor = ADC_GetConversionResult();
            new_channel = potentiometer;
            break;
    }
    ADC_SelectChannel(new_channel);
}

void initAdcMultiplexer(void) {
    ADC_SelectChannel(potentiometer);
    ADC_SetInterruptHandler(adcConversionDoneHandler);
}

uint16_t getPotentiometer(void) {
    return ADC_potentiometer;
}

uint16_t getHoogtesensor(void) {
    return ADC_hoogtesensor;
}
