/*
 * SPI.c
 *
 * Created: 06/09/2021 05:16:49 م
 *  Author: Mohamed.Lamie
 */ 
#include "SPI.h"

void SPI_MASTER_Initialize(void){

	CLR_BIT(SPSR,SPI12X); //SPEED SELECTOR : Fosc/128
	
	SET_BIT(DDRB,SS);   /*Define direction as output*/
	SET_BIT(DDRB,MOSI);	/*Define direction as input*/
	CLR_BIT(DDRB,MISO);	/*Define direction as output*/
	SET_BIT(DDRB,SCK);	/*Define direction as output*/
	
	SPCR = 0x53;//0b 0101 0011
	CLR_BIT(PORTB,SS);
}

void MASTER_Transmit(uint8_t data){
	SPDR = data;
	while(GET_BIT(SPSR,SPIF) != 1);
}

void SPI_SLAVE_Initialize(void){
	
	CLR_BIT(DDRB,SS);   /*Define direction as input*/
	CLR_BIT(DDRB,MOSI);	/*Define direction as output*/
	SET_BIT(DDRB,MISO);	/*Define direction as input*/
	CLR_BIT(DDRB,SCK);	/*Define direction as input*/
	
	SPCR = 0x43;//0b 0100 0011
}

uint8_t SLAVE_Receive(void){
	while( GET_BIT(SPSR,SPIF) != 1);
	return SPDR;
}