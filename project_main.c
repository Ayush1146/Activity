
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
			InitADC();	/*Initailising ADC*/
			setup_pwm();	/*Setting up PWM*/
			USARTInit(103);	/*Initialising USART*/
    		uint16_t temp = 0;
			temp = ReadADC(0); /*Reading the temperature value*/
			_delay_ms(200);
			pwm_waveform(temp);	/*Generation of PWM according to the temperature value*/
			_delay_ms(200);
      
      }
    }
	return 0;
}
