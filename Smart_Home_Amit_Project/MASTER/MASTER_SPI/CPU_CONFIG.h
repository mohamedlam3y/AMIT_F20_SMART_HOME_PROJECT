/*
 * CPU_CONFIG.h
 *
 * Created: 26/09/2021 02:28:26 م
 *  Author: Mohamed.Lamie
 */ 


#ifndef CPU_CONFIG_H_
#define CPU_CONFIG_H_

/*Micro-Controller CPU Configuration*/
#undef F_CPU                // Undefined internal oscillator
#define F_CPU 16000000      // Defined external oscillator
#include <avr/io.h>         // Defined Input/Output for this MC
#include <avr/interrupt.h>  // Defined interrupts for AVR controller
#include <util/delay.h>     // Defined built-in delay function
#include "BIT_MATH.h"
#include "DIO.h"



#endif /* CPU_CONFIG_H_ */