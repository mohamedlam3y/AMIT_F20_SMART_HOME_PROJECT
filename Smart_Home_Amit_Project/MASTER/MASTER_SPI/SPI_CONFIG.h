/*
 * SPI_CONFIG.h
 *
 * Created: 06/09/2021 05:14:28 م
 *  Author: Mohamed.Lamie
 */ 


#ifndef SPI_CONFIG_H_
#define SPI_CONFIG_H_
#include "CPU_CONFIG.h"

/* SPCR REGISTER */
#define SPIE 7
#define SPE 6
#define DORD 5
#define MSTR 4
#define CPOL 3
#define CPHA 2
#define SPR1 1
#define SPR0 0

/* SPSR REGISTER */
#define SPIF 7
#define WCOL 6
#define SPI12X 0

/* STATUS */
#define SPI_HIGH 1
#define SPI_LOW  0

/* OTHERS */
#define SS 4
#define MOSI 5
#define MISO 6
#define SCK 7


#endif /* SPI_CONFIG_H_ */