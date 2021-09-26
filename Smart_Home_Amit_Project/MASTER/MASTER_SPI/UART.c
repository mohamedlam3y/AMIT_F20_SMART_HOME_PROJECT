/*
 * UART.c
 *
 * Created: 26/09/2021 02:34:19 م
 *  Author: Mohamed.Lamie
 */ 


#include "UART.h"

void UART_Init(void)
{
	/*Baud rate value variable*/
	uint16_t UBRR_Val = 0;
	/*Enable Transmitter and Receiver bits*/
	UCSRB = (1 << RXEN) | (1 << TXEN);
	/*Full configuration for UART*/
	UCSRC = (1 << URSEL) | (1 << UCSZ1) | (1 << UCSZ0);
	/*Baud Rate Calculations*/
	UBRR_Val = (((FRQ) / (16 * BAUDRATE)) - 1);//11110101 00111001
	UBRRL = UBRR_Val;     //00000000 00111001
	UBRRH = UBRR_Val >> 8;//00000000 11110101
}
void UART_Transmit(uint8_t data)
{
	UDR = data;
	while (GET_BIT(UCSRA, TXC) != 1);
}
uint8_t UART_Receive(void)
{
	while (GET_BIT(UCSRA, RXC) != 1);
	return UDR;
}


void uart_init(void){
	/* disabling the interrupts */
	CLR_BIT(UCSRB,RXCIE); CLR_BIT(UCSRB,TXCIE);  CLR_BIT(UCSRB,UDRIE);
	/* enabling receiving and writing */
	SET_BIT(UCSRB,TXEN);  SET_BIT(UCSRB,RXEN);
	/* selecting char size */
	CLR_BIT(UCSRB,UCSZ2);  SET_BIT(UCSRC,UCSZ1);  SET_BIT(UCSRC,UCSZ0);
	
	SET_BIT(UCSRC,URSEL); // register select
	SET_BIT(UCSRC,UMSEL); // synchronous
	/* parity mode select */
	CLR_BIT(UCSRC,UPM1);  CLR_BIT(UCSRC,UPM0);
	
	CLR_BIT(UCSRC,USBS); //stop bit select
	
	CLR_BIT(UCSRC,UCPOL); //clock polarity
	
	uint16_t UBRR = 0;
	UBRR = (((FRQ) / (16 * BAUDRATE)) - 1);
	UBRRL = UBRR; // selecting the lower 8 bits
	UBRRH = UBRR >> 8; // selecting the upper 8 bits
}

void uart_transmit(uint8_t data){
	UDR = data;
	while(GET_BIT(UCSRA,TXC) != 1);
}

uint8_t uart_receive(void){
	while(GET_BIT(UCSRA,RXC) != 1);
	return UDR;
}

