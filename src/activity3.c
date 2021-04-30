
#include "activity3.h"
#include "activity4.h"

void setuppwm(){
    TCCR1A |= (1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
    TCCR1B |= (1<<WGM12)|(1<<CS11)|(1<<CS10); // 64 PRESCALAR

    DDRB |= (1<<PB1);
}


void waveform(uint16_t temp)
{
    if(temp>=0 && temp<=200){
        OCR1A=0xcc;  //Output PWM 20%

    }
    else if(temp>=210 && temp<=500){
        OCR1A=0x199;//Output PWM 40%

    }
    else if(temp>=510 && temp<=700){
        OCR1A=0x2cc;//Output PWM 70%

    }
    else if(temp>=710 && temp<=1024){
        OCR1A=0x3cb;//Output PWM 95%

    }
    else{
        OCR1A = 0x3ff; //Output PWM 100%

    }

}

