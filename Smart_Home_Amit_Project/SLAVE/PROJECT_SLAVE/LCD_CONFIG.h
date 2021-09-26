/*
 * LCD_CONFIG.h
 *
 * Created: 26/09/2021 02:32:24 م
 *  Author: Mohamed.Lamie
 */ 


#ifndef LCD_CONFIG_H_
#define LCD_CONFIG_H_


#include "CPU_CONFIG.h"
/*LCD Mode will be used*/
#define LCD_MODE      4
/*Command Port*/
#define LCD_CMD_PORT  DIO_PORTB
/*Data Port*/
#define LCD_DTA_PORT  DIO_PORTA
/*Control Pins*/
#define LCD_RS        DIO_PIN1
#define LCD_RW        DIO_PIN2
#define LCD_EN        DIO_PIN3
/*Data Pins*/
#define LCD_D4        DIO_PIN4
#define LCD_D5        DIO_PIN5
#define LCD_D6        DIO_PIN6
#define LCD_D7        DIO_PIN7
/*State*/
#define LCD_OUTPUT    DIO_OUTPUT
#define LCD_LOW       DIO_LOW
#define LCD_HIGH      DIO_HIGH



#endif /* LCD_CONFIG_H_ */