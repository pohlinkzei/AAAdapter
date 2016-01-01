/*
 * interrupt.c
 *
 * Created: 01.01.2016 11:00:07
 *  Author: robert.pohlink
 */ 
#include <avr/io.h>
#include <avr/interrupt.h>
#include "interrupt.h"
#include "io.h"
#include "relais.h"

extern struct_relais relais;

void interrupt_Init (void)
{
	// PCint0 aktivieren
	GIFR = 0;
	GIMSK = 0;
	PCMSK0 = (1<<PCINT0) | (1<<PCINT3);
	GIMSK |= (1<<PCIE0);
}

// PCint für ZV auf und ZV zu
ISR(PCINT0_vect)
{
	// Relais ausschalten & Timer setzen.
	relais.Status = RELAIS_STATUS_EIN;
}

