/* 
 * File:   controller.h
 * Author: Wednesday
 *
 * Created on February 12, 2025, 11:38 AM
 */

#ifndef CONTROLLER_H
#define	CONTROLLER_H

#ifdef	__cplusplus
extern "C" {
#endif

void controller(void);
uint16_t getSetpoint(void);
uint16_t getDutycycle(void);
float getKp(void);
float getKi(void);

//setters
void setSetpoint(uint16_t);
void setDutycycle(uint16_t);
void setKp(float);
void setKi(float);


#ifdef	__cplusplus
}
#endif

#endif	/* CONTROLLER_H */

