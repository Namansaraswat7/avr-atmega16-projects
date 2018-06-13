/*
 * adc1.c
 *
 * Created: 28-06-2017 12:31:12 PM
 *  Author: hp 1
 */ 


#include <avr/io.h>

int main(void)
{
	DDRC=255;
    while(1)
    {ADMUX=0b01000000;
	    ADCSRA=0b11010111;
        PORTC=ADC;
		    }
}