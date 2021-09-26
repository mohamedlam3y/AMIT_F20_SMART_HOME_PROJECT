/*
 * UART.h
 *
 * Created: 26/09/2021 02:35:17 م
 *  Author: Mohamed.Lamie
 */ 


#ifndef UART_H_
#define UART_H_


#include "UART_CONFIG.h"

void UART_Init(void);
void UART_Transmit(uint8_t data);
uint8_t UART_Receive(void);
void uart_init(void);




#endif /* UART_H_ */