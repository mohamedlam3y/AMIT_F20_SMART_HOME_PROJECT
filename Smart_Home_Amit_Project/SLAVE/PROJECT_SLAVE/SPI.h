/*
 * SPI.h
 *
 * Created: 06/09/2021 05:16:39 م
 *  Author: Mohamed.Lamie
 */ 


#ifndef SPI_H_
#define SPI_H_

#include "SPI_CONFIG.h"

void SPI_Initialize(void);
void MASTER_Initialize(void);
void MASTER_Transmit(uint8_t data);
void SLAVE_Initialize(void);
uint8_t SLAVE_Receive(void);




#endif /* SPI_H_ */