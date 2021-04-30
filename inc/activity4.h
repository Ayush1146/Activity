#ifndef ACTIVITY4_H_INCLUDED
#define ACTIVITY4_H_INCLUDED

#define F_CPU 16000000UL
#include<avr/io.h>
#include <util/delay.h>
#include <stdint.h>

void USARTint(uint16_t );

void UARTwritechar(uint16_t );

char UARTreadchar();



#endif // ACTIVITY4_H_INCLUDED
