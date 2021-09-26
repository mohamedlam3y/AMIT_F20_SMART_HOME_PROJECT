/*
 * UART_ADRESSES.h
 *
 * Created: 04/09/2021 11:08:21 م
 *  Author: Mohamed.Lamie
 */ 


#ifndef UART_ADRESSES_H_
#define UART_ADRESSES_H_

#define  UDR    (*(volatile uint8_t*) (0x2C))
#define  UCSRA  (*(volatile uint8_t*) (0x2B))
#define  UCSRB  (*(volatile uint8_t*) (0x2A))

#define  UBRRL   (*(volatile uint8_t*) (0x29))
#define  ACSR    (*(volatile uint8_t*) (0x28))c

#define UBRRH (*(volatile uint8_t*)(0x40))
#define UCSRC (*(volatile uint8_t*)(0x40))


#endif /* UART_ADRESSES_H_ */