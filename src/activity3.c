
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
    char temprature[10];
    if(temp>=0 && temp<=200){
        OCR1A=0xcc;  //Output PWM 20%
        temprature[0] = '2';
        temprature[1] = '0';
        temprature[2] = 176;
        temprature[3] = 'C';
        temprature[4] = ' ';
        temprature[5] = '\0';

        for(i=0;i<=5;i++){

            UARTwritechar(temprature[i]);

        }
        _delay_ms(20);
    }
    else if(temp>=210 && temp<=500){
        OCR1A=0x199;//Output PWM 40%
        temprature[0] = '2';
        temprature[1] = '5';
        temprature[2] = 176;
        temprature[3] = 'C';
        temprature[4] = ' ';
        temprature[5] = '\0';

        for(i=0;i<=5;i++){

          UARTwritechar(temprature[i]);
        }
        _delay_ms(20);
    }
    else if(temp>=510 && temp<=700){
        OCR1A=0x2cc;//Output PWM 70%
        temprature[0] = '2';
        temprature[1] = '9';
        temprature[2] = 176;
        temprature[3] = 'C';
        temprature[4] = ' ';
        temprature[5] = '\0';

        for(i=0;i<=5;i++){

          UARTwritechar(temprature[i]);
        }
        _delay_ms(20);
    }
    else if(temp>=710 && temp<=1024){
        OCR1A=0x3cb;//Output PWM 95%
        temprature[0] = '3';
        temprature[1] = '3';
        temprature[2] = 176;
        temprature[3] = 'C';
        temprature[4] = ' ';
        temprature[5] = '\0';

        for(i=0;i<=5;i++){

            UARTwritechar(temprature[i]);
    }
        _delay_ms(20);
    }
    else{
        OCR1A = 0x3ff; //Output PWM 100%
        temprature[0] = '0';
        temprature[1] = 'F';
        temprature[2] = 'F';
        temprature[3] = ' ';
        temprature[4] = ' ';
        temprature[5] = '\0';

        for(i=0;i<=5;i++){

            UARTwritechar(temprature[i]);
        }
        _delay_ms(20);
    }

}
