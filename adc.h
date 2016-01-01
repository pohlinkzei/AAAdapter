/*
 * adc.h
 *
 * Created: 21.10.2012 10:24:23
 *  Author: Udo
 */ 

#ifndef ADC_H_
#define ADC_H_
#include <avr/io.h>

#define ADC_MUX_POTI_DAUER	(1<<PA2)						// ADC2 = PA2
#define ADC_NUMBER			4	// Anzahl der Messungen pro Durchgang


void adc_Init (void);
uint16_t adc_Mess (uint8_t kanal);

#endif /* ADC_H_ */