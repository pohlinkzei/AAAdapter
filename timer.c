/*
 * timer.c
 *
 * Created: 21.10.2012 10:42:04
 *  Author: Udo
 */ 

#include <avr/interrupt.h>
#include <avr/io.h>
#include "io.h"
#include "timer.h"
#include "relais.h"

extern struct_relais relais;

void timer0_Init(void)
{
	// Zeitgeber 25ms für Zeitsteuerung und einige Entprellungen
	// 25 ms, Teiler 256, 0x9F bei 1 MHz
	
	TCCR0A = 0x00;
	TCCR0B = 0x00;
	TCNT0  = TIMER0_WERT;
	TIMSK0  = (1<<TOIE0);
	TCCR0B = (1<<CS02);
}	
ISR(TIM0_OVF_vect)
{
	TCNT0 = TIMER0_WERT;	// Zurücksetzen
	
	// Entprellen
	if (RELAIS_STATUS_EIN == relais.Status)
	{
		if (relais.Abschaltzeit > 0)
		{
			relais.Abschaltzeit --;
		}
	}
	
	
}	
	



    
    

    
    

