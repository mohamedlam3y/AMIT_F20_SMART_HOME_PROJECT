/*
 * DIO.h
 *
 * Created: 26/09/2021 02:30:24 م
 *  Author: Mohamed.Lamie
 */ 


#ifndef DIO_H_
#define DIO_H_


#include "DIO_CONFIG.h"
/*
Define direction for pin (Input or Output)
*/
void DIO_SetPin_Direction(DIO_Port port, DIO_Pin pin, DIO_Direction direction);
/*
In-Case output
*/
void DIO_SetPin_State(DIO_Port port, DIO_Pin pin, DIO_State state);
void DIO_TglPin_State(DIO_Port port, DIO_Pin pin);
/*
In-Case input
*/
uint8_t DIO_GetPin_State(DIO_Port port, DIO_Pin pin);
void DIO_SetPin_PullUp(DIO_Port port, DIO_Pin pin);





#endif /* DIO_H_ */