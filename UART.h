/* 
 * File:   UART.h
 * Author: Wednesday
 *
 * Created on February 12, 2025, 10:21 AM
 */

#ifndef UART_H
#define	UART_H

#ifdef	__cplusplus
extern "C" {
#endif

void printLogs(void);
void uartHandler(void);
void printFloat(float);
float str2float(char);

#ifdef	__cplusplus
}
#endif

#endif	/* UART_H */

