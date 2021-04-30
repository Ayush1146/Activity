
#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"
int main(void)
{
	/*Initialize Peripherals*/
	peripheral_init();

	while(1){
		int status = 0;
		status = initialize_led();	/*Checking the status of buttons*/
		if(status == 1){
			Init_ADC();	/*Initailising ADC*/
			setuppwm();	/*Setting up PWM*/
			USARTint(103);	/*Initialising USART*/
    		uint16_t temp = 0;
			temp = readADC(0); /*Reading the temperature value*/
			_delay_ms(200);
			waveform(temp);	/*Generation of PWM according to the temperature value*/
			_delay_ms(200);
			UARTwritechar(temp);	
      
      }
    }
	return 0;
}
