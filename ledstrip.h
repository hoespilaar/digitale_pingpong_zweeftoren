/* 
 * File:   ledstrip.h
 * Author: Wednesday
 *
 * Created on February 12, 2025, 3:36 PM
 */

#ifndef LEDSTRIP_H
#define	LEDSTRIP_H

#ifdef	__cplusplus
extern "C" {
#endif

void initLedstrip(void);
void updateLedstripAnimation(void);
void sendLedstripFrame(uint8_t, uint8_t, uint8_t, uint8_t);
void sendLedstripEndFrame(void);
void sendLedstripStartFrame(void);
void dutycycle_led_strip(void);


#ifdef	__cplusplus
}
#endif

#endif	/* LEDSTRIP_H */

