/*
 * add_or_sub_using_switches.c
 *
 * Created: 10-06-2017 07:21:13 PM
 *  Author: hp 1
 */ 


#include <avr/io.h>
#include <util/delay.h>
int main(void)
{DDRC=255;
	DDRA=0;
	PORTA=0b00000011;
	int i=1;
	int j=1,z=0;
    while(1)
    {
		/*if((PINA&0x01)==0)
		{++i;
			while((PINA&0x01)==0);
			//while((PINA&0x01)==1);
			
		}
		else if ((PINA&0x02)==0)
		{++j;
			while((PINA&0x02)==0);
		//	while((PINA&0x02)==1);
			*/
		 for(int k=1;k<=i;k=i)
		 
		 {
			 if((PINA&0X01)==0)
			 {//PORTC=255;
				 while((PINA&0x01)==0);
				// while((PINA&0x01)==1);
				 
				 PORTC=k-1;
				 i=i+1;
				
		//		 if(j>1)
	//			 {
//					 PORTC=k-j+1;
					 
					
					 
					 
					 
			//	 }
	
				// j=1;
				 
			 } 
			 else if ((PINA&0x02)==0)
			 {while((PINA&0x02)==0);
				 i=i-1;
				 PORTC=k-1;
				 
				 
				 
	}
			
		}
       
    }

}