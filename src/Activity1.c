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
#include "project-config.h"
#include "activity.h"

void peripheral_init(void){

 DDRB |= (1<<LED_PIN);

    DDRD &=~(1<<SW_PIN_0);
    DDRD &=~(1<<SW_PIN_1);
    PORTD |= (1<<SW_PIN_0);
    PORTD |= (1<<SW_PIN_1);
}
int main(void)
{
   /**
    * @brief Construct a new peripheral init object
    * 
    */
    peripheral_init();

    while(1){
    if((!(PIND&(1<<SW_PIN_0))) && (!(PIND&(1<<SW_PIN_1))))
       {

       LED_PORT|= (1<<LED_PIN);
       
       _delay_ms(2000);
       }

        else{

        LED_PORT&=~(1<<LED_PIN);
        _delay_ms(2000);

        }
    }
    return 0;
}
