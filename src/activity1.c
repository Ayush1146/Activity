/**
 * @file project_main.c
 * @author Ayush (sharmayush009@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "activity1.h"

void peripheral_init(void){

 DDRB |= (1<<LED_PIN);

    DDRD &=~(1<<SW_PIN_0);
    DDRD &=~(1<<SW_PIN_1);
    PORTD |= (1<<SW_PIN_0);
    PORTD |= (1<<SW_PIN_1);
}

int initialize_led(){
    if(SWITCH_ON)
       {

       LED_PORT|= (1<<LED_PIN);
       
       _delay_ms(LED_ON_TIME);
     return 1;
       }

        else{

        LED_PORT&=~(1<<LED_PIN);
        _delay_ms(LED_OFF_TIME);
        return 0;
        }
  
}
