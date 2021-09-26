/*
 * LCD.h
 *
 * Created: 26/09/2021 02:32:53 م
 *  Author: Mohamed.Lamie
 */ 


#ifndef LCD_H_
#define LCD_H_

#include "LCD_CONFIG.h"

void LCD_Init(void);               /*Initialize LCD*/
void LCD_WRITE_CMD(uint8_t cmd);   /*Write command inside control register*/
void LCD_WRITE_DTA(uint8_t dta);   /*write data inside data register*/
void LCD_WRITE_STR(uint8_t* str);  /*write string on screen*/
void LCD_WRITE_NBR(uint32_t numbr);/*write number on screen*/
void LCD_CLEAR(void);              /*Clear data display on screen*/



#endif /* LCD_H_ */