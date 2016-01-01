/*
 * io.h
 *
 * Created: 21.10.2012 10:10:17
 *  Author: Udo
 */ 

#ifndef IO_H_
#define IO_H_

#include <avr/io.h>
// Port A
// 0	Input	ZV_auf		
// 1	Output	NC		
// 2	Input	Poti_Dauer	ADC 2
// 3	Input	ZV_zu
// 4	Output	NC
// 5	Output	Relais_out
// 6	Output	NC		
// 7	Output	NC		

#define set_DDRA()	DDRA  = 0b11110010
#define set_PORTA()	PORTA = 0b00000000
#define setRelais_ein()		(PORTA |= (1<<PORTA5))
#define setRelais_aus()		(PORTA &=~(1<<PORTA5))
#define ZV_auf_Lesen()		bit_is_set (PINA,PINA0)
#define ZV_zu_Lesen()		bit_is_set (PINA,PINA3)
//#define setSh_ein()		(PORTA |= (1<<PORTA4))
//#define setSh_aus()		(PORTA &=~(1<<PORTA4))


// Port B
// 0	Output	NC
// 1	Output	NC
// 2	Output	NC
// 3	Output	NC
#define set_DDRB()		DDRB  = 0b1111
#define set_PORTB()		PORTB = 0b0000

// #define setLed_ein()	(PORTB |= (1<<PORTB0))
// #define setLed_aus()	(PORTB &=~(1<<PORTB0))
// #define setVerbraucher_ein()	(PORTB |= (1<<PORTB1))
// #define setVerbraucher_aus()	(PORTB &=~(1<<PORTB1))

void io_Init (void);

#endif /* IO_H_ */