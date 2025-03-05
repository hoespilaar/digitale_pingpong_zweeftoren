/* 
 * File:   adcMeasurements.h
 * Author: Wednesday
 *
 * Created on February 12, 2025, 10:05 AM
 */

#ifndef ADCMEASUREMENTS_H
#define	ADCMEASUREMENTS_H

#ifdef	__cplusplus
extern "C" {
#endif

#include <stdint.h>
void adcConversionDoneHandler(void);
void initAdcMultiplexer(void);

uint16_t getPotentiometer(void);
uint16_t getHoogtesensor(void);
uint16_t getPomphoogte(void);


#ifdef	__cplusplus
}
#endif

#endif	/* ADCMEASUREMENTS_H */

