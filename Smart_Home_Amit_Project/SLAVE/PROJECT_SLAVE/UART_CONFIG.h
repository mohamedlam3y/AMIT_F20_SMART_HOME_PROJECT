/*
 * UART_CONFIG.h
 *
 * Created: 26/09/2021 02:34:47 م
 *  Author: Mohamed.Lamie
 */ 


#ifndef UART_CONFIG_H_
#define UART_CONFIG_H_


#include "CPU_CONFIG.h"
#include "UART_ADRESSES.h"

#define FRQ      160000
#define BAUDRATE 96


#define UART_HIGH  1
#define UART_LOW   0

#define RXC  DIO_PIN7
#define TXC  DIO_PIN6
#define UDRE DIO_PIN5
#define FE   DIO_PIN4
#define DOR  DIO_PIN3
#define PE   DIO_PIN2
#define U2X   DIO_PIN1
#define MPCM   DIO_PIN0

#define RXCIE  DIO_PIN7
#define TXCIE  DIO_PIN6
#define UDRIE  DIO_PIN5
#define RXEN   DIO_PIN4
#define TXEN   DIO_PIN3
#define UCSZ2  DIO_PIN2
#define RXB8   DIO_PIN1
#define TXB8   DIO_PIN0

#define URSEL  DIO_PIN7
#define UMSEL  DIO_PIN6
#define UPM1   DIO_PIN5
#define UPM0   DIO_PIN4
#define USBS   DIO_PIN3
#define UCSZ1  DIO_PIN2
#define UCSZ0  DIO_PIN1
#define UCPOL  DIO_PIN0






#endif /* UART_CONFIG_H_ */