/**
 * @file activity4.h
 * @author  Ayush (sharmayush009@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY4_H_INCLUDED
#define ACTIVITY4_H_INCLUDED

#define F_CPU 16000000UL // clock freq 16 Mhz
#include<avr/io.h>
#include <util/delay.h>
#include <stdint.h>

/**
 * @brief Initailize USART
 * 
 */
void USARTint(uint16_t );

/**
 * @brief write the character to the USART buffer
 * 
 * @param data 
 */
void UARTwritechar(char data);

/**
 * @brief Read char from UDR register
 * 
 * @return char CHarater stored in UDR register
 */
char UARTreadchar();



#endif // ACTIVITY4_H_INCLUDED
