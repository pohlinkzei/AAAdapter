/*
 * AAAdapter.c
 *
 * Created: 31.12.2015 16:59:11
 *  Author: robert.pohlink
 */ 

#include <avr/interrupt.h>
#include <avr/io.h>
#include "io.h"
#include "adc.h"
#include "relais.h"
#include "sleep.h"
extern struct_relais relais;



int main(void)
{
	set_PORTA();
	set_DDRA();
	set_PORTB();
	set_DDRB();
	relais_init();
	sleep_init();
	sei();
    while(1)
    {
		sleep_task();
    }
}