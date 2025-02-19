/**
 * TMR6 Generated Driver API Header File
 *
 * @file tmr6.h
 *  
 * @defgroup tmr6 TMR6
 *
 * @brief This file contains the API prototypes and other data types for the Timer2 (TMR6) driver.
 *
 * @version Driver Version 2.0.0
 *
 * @version Package Version 2.0.0
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

#ifndef TMR6_H
#define TMR6_H

#include <stdint.h>
#include <stdbool.h>
#include "tmr6_deprecated.h"

/**
 * @misradeviation{@advisory,2.5}
 * MCC Melody drivers provide macros that can be added to an application. 
 * It depends on the application whether a macro is used or not. 
 */

/**
 * @ingroup tmr6
 * @brief Defines the maximum count value of the timer.
 */
#define TMR6_MAX_COUNT (255U)
/**
 * @ingroup tmr6
 * @brief Defines the timer prescaled clock frequency in hertz.
 */
 /* cppcheck-suppress misra-c2012-2.5 */
#define TMR6_CLOCK_FREQ (500000UL)
/**
 * @ingroup tmr6
 * @brief Defines the Custom Name for the \ref TMR6_MAX_COUNT.
 */
 /* cppcheck-suppress misra-c2012-2.5 */
#define TMR_LEDSTRIP_MAX_COUNT TMR6_MAX_COUNT
/**
 * @ingroup tmr6
 * @brief Defines the Custom Name for the \ref TMR6_CLOCK_FREQ.
 */
 /* cppcheck-suppress misra-c2012-2.5 */
#define TMR_LEDSTRIP_CLOCK_FREQ TMR6_CLOCK_FREQ
/**
 * @ingroup tmr6
 * @brief Defines the Custom Name for the \ref TMR6_Initialize API.
 */
 /* cppcheck-suppress misra-c2012-2.5 */
#define tmr_ledstrip_Initialize TMR6_Initialize
/**
 * @ingroup tmr6
 * @brief Defines the Custom Name for the \ref TMR6_Deinitialize API.
 */
 /* cppcheck-suppress misra-c2012-2.5 */
#define tmr_ledstrip_Deinitialize TMR6_Deinitialize
/**
 * @ingroup tmr6
 * @brief Defines the Custom Name for the \ref TMR6_Start API.
 */
 /* cppcheck-suppress misra-c2012-2.5 */
#define tmr_ledstrip_Start TMR6_Start
/**
 * @ingroup tmr6
 * @brief Defines the Custom Name for the \ref TMR6_Stop API.
 */
 /* cppcheck-suppress misra-c2012-2.5 */
#define tmr_ledstrip_Stop TMR6_Stop
/**
 * @ingroup tmr6
 * @brief Defines the Custom Name for the \ref TMR6_CounterGet API.
 */
 /* cppcheck-suppress misra-c2012-2.5 */
#define tmr_ledstrip_CounterGet TMR6_CounterGet
/**
 * @ingroup tmr6
 * @brief Defines the Custom Name for the \ref TMR6_CounterSet API.
 */
 /* cppcheck-suppress misra-c2012-2.5 */
#define tmr_ledstrip_CounterSet TMR6_CounterSet
/**
 * @ingroup tmr6
 * @brief Defines the Custom Name for the \ref TMR6_PeriodSet API
 */
 /* cppcheck-suppress misra-c2012-2.5 */
#define tmr_ledstrip_PeriodSet TMR6_PeriodSet
/**
 * @ingroup tmr6
 * @brief Defines the Custom Name for the \ref TMR6_PeriodGet API.
 */
 /* cppcheck-suppress misra-c2012-2.5 */
#define tmr_ledstrip_PeriodGet TMR6_PeriodGet
/**
 * @ingroup tmr6
 * @brief Defines the Custom Name for the \ref TMR6_MaxCountGet API.
 */
 /* cppcheck-suppress misra-c2012-2.5 */
#define tmr_ledstrip_MaxCountGet TMR6_MaxCountGet
/**
 * @ingroup tmr6
 * @brief Defines the Custom Name for the \ref TMR6_PeriodMatchStatusGet API
 */
/* cppcheck-suppress misra-c2012-2.5 */
#define tmr_ledstrip_PeriodMatchStatusGet TMR6_PeriodMatchStatusGet
/**
 * @ingroup tmr6
 * @brief Defines the Custom Name for the \ref TMR6_PeriodMatchStatusClear API
 */
/* cppcheck-suppress misra-c2012-2.5 */
#define tmr_ledstrip_PeriodMatchStatusClear TMR6_PeriodMatchStatusClear
/**
 * @ingroup tmr6
 * @brief Defines the Custom Name for the \ref TMR6_PeriodMatchCallbackRegister API
 */
 /* cppcheck-suppress misra-c2012-2.5 */
#define tmr_ledstrip_PeriodMatchCallbackRegister TMR6_PeriodMatchCallbackRegister
/**
 * @ingroup tmr6
 * @brief Defines the Custom Name for the \ref TMR6_Tasks API.
 */
#define tmr_ledstrip_Tasks TMR6_Tasks

/**
 * @ingroup tmr6
 * @brief Initializes the TMR6 module.
 *        This routine must be called before any other TMR6 routines.
 * @param None.
 * @return None.
 */
void TMR6_Initialize(void);

/**
 * @ingroup tmr6
 * @brief Deinitializes the TMR6 module.
 * @param None.
 * @return None.
 */
void TMR6_Deinitialize(void);

/**
 * @ingroup tmr6
 * @brief Starts the TMR6 timer.
 * @pre Initialize TMR6 with TMR6_Initialize() before calling this API.
 * @param None.
 * @return None.
 */
void TMR6_Start(void);

/**
 * @ingroup tmr6
 * @brief Stops the TMR6 timer.
 * @pre Initialize TMR6 with TMR6_Initialize() before calling this API.
 * @param None.
 * @return None.
 */
void TMR6_Stop(void);

/**
 * @ingroup tmr6
 * @brief Returns the current counter value.
 * @pre Initialize TMR6 with TMR6_Initialize() before calling this API.
 * @param None.
 * @return Counter value from the TMR6 register
 */
uint8_t TMR6_CounterGet(void);

/**
 * @ingroup tmr6
 * @brief Sets the counter value.
 * @pre Initialize TMR6 with TMR6_Initialize() before calling this API.
 * @param counterValue - Counter value to be written to the TMR6 register
 * @return None.
 */
void TMR6_CounterSet(uint8_t counterValue);

/**
 * @ingroup tmr6
 * @brief Sets the period value.
 * @pre Initialize TMR6 with TMR6_Initialize() before calling this API.
 * @param periodCount - Period count value written to the PR6 register
 * @return None.
 */
void TMR6_PeriodSet(uint8_t periodCount);

/**
 * @ingroup tmr6
 * @brief Returns the current period value.
 * @pre Initialize TMR6 with TMR6_Initialize() before calling this API.
 * @param None.
 * @return Period count value from the PR6 register
 */
uint8_t TMR6_PeriodGet(void);

/**
 * @ingroup tmr6
 * @brief Returns the maximum count value.
 * @param None.
 * @return Maximum count value
 */
uint8_t TMR6_MaxCountGet(void);


/**
 * @ingroup tmr6
 * @brief Setter function for the TMR6 period match callback.
 * @param CallbackHandler - Address of the custom callback function
 * @return None.
 */
void TMR6_PeriodMatchCallbackRegister(void (* CallbackHandler)(void));

/**
 * @ingroup tmr6
 * @brief Returns the status of the TMR6 Period Match Interrupt flag.
 * @param None.
 * @return Interrupt flag status
 */
bool TMR6_PeriodMatchStatusGet(void);

/**
 * @ingroup tmr6
 * @brief Clears the TMR6 Period Match Interrupt flag.
 * @param None.
 * @return None.
 */
void TMR6_PeriodMatchStatusClear(void);

/**
 * @ingroup tmr6
 * @brief Performs tasks to be executed during the period match interrupt event.
 * @param None.
 * @return None.
 */
void TMR6_Tasks(void);

#endif // TMR6_H
/**
 End of File
*/
