/**
 * @file activity.h
 * @author Ayush (sharmayush009@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY_H_
#define __ACTIVITY_H_

#include <avr/io.h>
#include <util/delay.h>
/**
 * Macro Definitions
 */
#define LED_ON 	(0x01)			/**< LED state HIGH */
#define LED_OFF	(0x00)			/**< LED state LOW */

#define LED_ON_TIME     (2000)  /**< LED ON time in milli seconds  */
#define LED_OFF_TIME    (2000)   /**< LED OFF time in milli seconds */



#endif /** __ACTIVITY_H_ */