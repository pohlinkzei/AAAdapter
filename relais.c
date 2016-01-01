/*
 * relais.c
 *
 * Created: 01.01.2016 11:25:13
 *  Author: robert.pohlink
 */ 
#include <avr/io.h>
#include "relais.h"
#include "adc.h"

struct_relais relais;

void relais_init(void){
	relais.Abschaltzeit = adc_Mess(2);
}


void relais_task(void){
	if(relais.Status == RELAIS_STATUS_EIN){
		setRelais_ein();
	}else{
		setRelais_aus();
	}
}