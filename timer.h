/*
 * timer.h
 *
 * Created: 21.10.2012 10:40:04
 *  Author: Udo
 */ 


#ifndef TIMER_H_
#define TIMER_H_

#include <avr/io.h>

#define TIMER_ENTPRELL_EIN	1
#define TIMER_ENTPRELL_AUS	0

#define TIMER0_WERT			0x9F	// Wert für 25 ms bei Teiler 256 (1 Mhz)

void timer0_Init(void);

#endif /*TIMER_H_*/
