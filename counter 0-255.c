/*
 * counter_0_255.c
 *
 * Created: 01-07-2017 08:31:12 PM
 *  Author: hp 1
 */ 


#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
 unsigned char z;
 DDRB=255;
 for(z=0;z<=255;z++)
 {PORTB=z;
	 _delay_ms(50);
 } 
}