/*
* PROJECT_SLAVE.c
*
* Created: 14/09/2021 04:31:36 م
* Author : Mohamed.Lamie
*/

#include "OUTPUT_Module.h"
#include "SPI.h"
#include "LCD.h"


int main(void)
{
	uint8_t data = 0 ;
	
	SPI_SLAVE_Initialize();
	
	LED0_Initialize();
	LED1_Initialize();
	LED2_Initialize();
	
	LCD_Init();
	LCD_CLEAR();
	
	while (1)
	{

		data = SLAVE_Receive();
	    LCD_WRITE_DTA(data);
			
		//if(data == 0x31)
		if(data == 'a')
		{
			LED0_ON();
			LED1_OFF();
			LED2_OFF();
			_delay_ms(125);
			data = 0 ;
		}
		/*else if (data == 0x32)*/
		else if (data == 'b')
		{
			LED0_OFF();
			LED1_ON();
			LED2_OFF();
			_delay_ms(125);
			data = 0 ;
		}
		/*else if (data == 0x33)*/
		else if(data == 'c')
		{
			LED0_OFF();
			LED1_OFF();
			LED2_ON();
			_delay_ms(125);
			data = 0 ;
		}
		else{
			uint8_t c = 0;
			LED0_OFF();
			LED1_OFF();
			LED2_OFF();
			
			do 
			{
				LED0_Toggle();
				LED1_Toggle();
				LED2_Toggle();
				_delay_ms(125);
				c++;
			} while (c != 10);
			
			LED0_ON();
			LED1_ON();
			LED2_ON();
		}
		
	}
}

