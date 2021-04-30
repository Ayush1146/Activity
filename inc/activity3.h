/**
 * @file activity3.h
 * @author Ayush (sharmayush009@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY3_H_INCLUDED
#define ACTIVITY3_H_INCLUDED


#include <avr/io.h>


/**
 * @brief Initialize peripherals
 * 
 */
void setuppwm();
/**
 * @brief PWM waveform from value of temprature from setuppwm
 * 
 */
void waveform(uint16_t);



#endif // ACTIVITY3_H_INCLUDED
