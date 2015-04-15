/*
 * Main_Dries.c
 *
 * Created: 10/04/2015 13:48:01
 *  Author: Dries
 */ 
#include "MAIN.H"
#include "MYDEFS.H"
#include "SUART.H"
#include "Defines.h"
#include "Uart.h"
#include <avr/io.h>

#include<util//delay.h>

int main(void)
{
	DDRC = 0;
	DDRB = 0;
	PORTC = 0xFF;
	PORTB = 0xFF;
	suart_init();
	USART_init();
	//USART_putstring("test");
	sei();
    while(1)
    {
			_delay_ms( 1000 );
			while( kbhit() ) {
				uputchar( ugetchar());
			}
	}
}