/*
 * relais.h
 *
 * Created: 01.01.2016 11:24:35
 *  Author: robert.pohlink
 */ 


#ifndef RELAIS_H_
#define RELAIS_H_

#include <avr/io.h>
#include "io.h"


#define RELAIS_STATUS_AUS		0
#define RELAIS_STATUS_EIN		1

typedef struct
{
	uint8_t				Status;
//	uint8_t				StatusNeu;
//	volatile uint8_t	Abschaltstatus;
	volatile uint16_t	Abschaltzeit;
} struct_relais;

void relais_init(void);
void relais_task(void);

#endif /* RELAIS_H_ */