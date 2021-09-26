﻿/*
 * DIO_CONFIG.h
 *
 * Created: 26/09/2021 02:31:03 م
 *  Author: Mohamed.Lamie
 */ 


#ifndef DIO_CONFIG_H_
#define DIO_CONFIG_H_


#include "CPU_CONFIG.h"
//Renaming ports by creating new userdefine datatype
typedef enum
{
	DIO_PORTA = 0,
	DIO_PORTB = 1,
	DIO_PORTC = 2,
	DIO_PORTD = 3
}DIO_Port;
//Renaming pins by creating new userdefine datatype
typedef enum
{
	DIO_PIN0 = 0,
	DIO_PIN1 = 1,
	DIO_PIN2 = 2,
	DIO_PIN3 = 3,
	DIO_PIN4 = 4,
	DIO_PIN5 = 5,
	DIO_PIN6 = 6,
	DIO_PIN7 = 7
}DIO_Pin;
//Renaming directions by creating new userdefine datatype
typedef enum
{
	DIO_INPUT = 0,
	DIO_OUTPUT = 1
}DIO_Direction;
//Renaming States by creating new userdefine datatype
typedef enum
{
	DIO_LOW = 0,
	DIO_HIGH = 1
}DIO_State;




#endif /* DIO_CONFIG_H_ */