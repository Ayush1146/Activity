
#include "activity3.h"
#include "activity4.h"
#include <string.h>

void setuppwm(){
    TCCR1A |= (1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
    TCCR1B |= (1<<WGM12)|(1<<CS11)|(1<<CS10); // 64 PRESCALAR

    DDRB |= (1<<PB1);
}


void waveform(uint16_t temp)
{
    int i;
    char temp[10];
    if(temp>=0 && temp<=200){
        OCR1A=0xcc;  //Output PWM 20%
        temp[0] = '2';
        temp[1] = '0';
        temp[2] = 176;
        temp[3] = 'C';
        temp[4] = ' ';
        temp[5] = '\0';

        for(i=0;i<=5;i++){

            UARTwritechar(temp[i]);

        }
        _delay_ms(20);
    }
    else if(temp>=210 && temp<=500){
        OCR1A=0x199;//Output PWM 40%
        temp[0] = '2';
        temp[1] = '5';
        temp[2] = 176;
        temp[3] = 'C';
        temp[4] = ' ';
        temp[5] = '\0';

        for(i=0;i<=5;i++){

          UARTwritechar(temp[i]);
        }
        _delay_ms(20);
    }
    else if(temp>=510 && temp<=700){
        OCR1A=0x2cc;//Output PWM 70%
        temp[0] = '2';
        temp[1] = '9';
        temp[2] = 176;
        temp[3] = 'C';
        temp[4] = ' ';
        temp[5] = '\0';

        for(i=0;i<=5;i++){

          UARTwritechar(temp[i]);
        }
        _delay_ms(20);
    }
    else if(temp>=710 && temp<=1024){
        OCR1A=0x3cb;//Output PWM 95%
        temp[0] = '3';
        temp[1] = '3';
        temp[2] = 176;
        temp[3] = 'C';
        temp[4] = ' ';
        temp[5] = '\0';

        for(i=0;i<=5;i++){

            UARTwritechar(temp[i]);
    }
        _delay_ms(20);
    }
    else{
        OCR1A = 0x3ff; //Output PWM 100%
        temp[0] = '0';
        temp[1] = 'F';
        temp[2] = 'F';
        temp[3] = ' ';
        temp[4] = ' ';
        temp[5] = '\0';

        for(i=0;i<=5;i++){

            UARTwritechar(temp[i]);
        }
        _delay_ms(20);
    }

}
