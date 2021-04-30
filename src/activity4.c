#include "activity4.h"

void USARTint(uint16_t ubrr_value){

 UBRR0L = ubrr_value;
 UBRR0H = (ubrr_value>>8)&0x00ff;
 UCSR0A |= (1<<RXC0) | (1<<TXC0);//Receive and Transmit Complete
 UCSR0B |= (1<<RXCIE0)| (1<<TXCIE0)| (1<< RXEN0) |(1<< TXEN0);// Enable Tx ,Rx and Interrupt
 UCSR0C |= (1<<UCSZ01)|(1<<UCSZ00); //8 bit size character size and by default asynchronous USART

}

void UARTwritechar(char data){

while(!((UCSR0A)& (1<<UDRE0)))
{

}

UDR0 = data;
}

char UARTreadchar(){
while(!((UCSR0A)&(1<<RXC0)))
{

}
return UDR0;
}


