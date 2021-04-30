#ifndef ACTIVITY4_H_INCLUDED
#define ACTIVITY4_H_INCLUDED

#define F_CPU 16000000UL

void USARTint(uint16_t ubrr_value );

void UARTwritechar(char data);

char UARTreadchar();



#endif // ACTIVITY4_H_INCLUDED
