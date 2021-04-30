/**
 * @file activity2.h
 * @author Ayush (sharmayush009@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY2_H_
#define __ACTIVITY2_H_

#include <avr/io.h>

/**
 * @brief Initializes the ADC conversion
 * 
 */
void Init_ADC();
/**
 * @brief Analog to Digital Conversion
 * 
 * @return uint16_t  digital value of analog input 
 */
uint16_t readADC(uint8_t);


#endif /** __ACTIVITY2_H_ */
