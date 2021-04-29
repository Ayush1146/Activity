#include "activity2.h"

void Init_ADC()     //INTIALIZE
{
 ADMUX = (1<<REFS0); // AVCC with external capacitor at AREF pin +5V
 ADCSRA = (1<<ADEN)|(7<<ADPS0); //ENABLE ADC AND SET PRESCALAR TO 128

}

uint16_t readADC(uint8_t ch)
{
ADMUX&=0xf8;
ch = ch&0b00000111;

ADMUX |= ch;

ADCSRA|=(1<<ADSC); // START CONVERSION

while(!(ADCSRA & (1<<ADIF)));  // bit is set when an ADC conversion completes INTERRUPT FLAG

ADCSRA|=(1<<ADIF);// Clear ADF

return(ADC);

}
