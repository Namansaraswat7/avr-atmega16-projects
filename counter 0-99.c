/*
 * counter_0_99.c
 *
 * Created: 12-06-2017 10:59:04 AM
 *  Author: hp 1
 */ 


#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
	int a[10]={0X3F,0x06,0x5B,0x4F,0x66,0x6D,0X7D,0x07,0x7F,0x67 };
		int i,k;
	
    while(1)
    {for(i=0;i<=9;i++)
		{PORTB=a[i];
			for(k=0;k<=9;k++)
			{PORTA=a[k];
			_delay_ms(100);}
			
		}
       
    }
}