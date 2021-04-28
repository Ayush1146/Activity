#ifndef __ACTIVITY2_H_
#define __ACTIVITY2_H_

#include <avr/io.h>
#include <util/delay.h>


void Init_ADC();

uint16_t readADC(uint8_t ch);


#endif /** __ACTIVITY2_H_ */
