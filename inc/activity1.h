/**
 * @file activity1.h
 * @author Ayush (sharmayush009@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY1_H_
#define __ACTIVITY1_H_

#include <avr/io.h>
#include <util/delay.h>
/**
 * Macro Definitions
 */
#define F_CPU 16000000UL 
#define LED_ON 	(0x01)			/**< LED state HIGH */
#define LED_OFF	(0x00)			/**< LED state LOW */

#define LED_ON_TIME     (2000)  /**< LED ON time in milli seconds  */
#define LED_OFF_TIME    (2000)   /**< LED OFF time in milli seconds */
#define SWITCH_ON (!(PIND&(1<<SW_PIN_0))) && (!(PIND&(1<<SW_PIN_1))) /**< Switch On*/
/**
 * Macro Definitions
 */


#define LED_PORT (PORTB)    /**< LED Port Number */
#define LED_PIN  (PB0)   /**< LED Pin number  */
#define SW_PORT (PORTD) /**< SWITCH Port number */
#define SW_PIN_0 (PD0)  /**< SWITCH 0 Pin number */
#define SW_PIN_1 (PD1)  /**< SWITCH 1 Pin number */

void peripheral_init(void);

#endif /** __ACTIVITY1_H_ */
