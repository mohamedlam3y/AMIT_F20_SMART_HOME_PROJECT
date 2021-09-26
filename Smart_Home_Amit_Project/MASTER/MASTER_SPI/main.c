/*
* MASTER_SPI.c
*
* Created: 16/09/2021 11:01:41 ص
* Author : Mohamed.Lamie
*/

#include "UART.h"
#include "SPI.h"
#include "LCD.h"

int main(void)
{
	uint8_t DATA = 0;
	SPI_MASTER_Initialize();
	UART_Init();
	LCD_Init();
	LCD_CLEAR();

	while (1)
	{
		DATA = UART_Receive();
		LCD_WRITE_DTA(DATA);
		
		MASTER_Transmit(DATA);
		_delay_ms(250);
		
	}
	
}
