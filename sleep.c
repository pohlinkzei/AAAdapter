/*
 * sleep.c
 *
 * Created: 01.01.2016 11:51:28
 *  Author: robert.pohlink
 */ 
#include <avr/io.h>
#include <avr/sleep.h>
#include "sleep.h"
#include "relais.h"

extern struct_relais relais;

void sleep_init(void){
	set_sleep_mode(SLEEP_MODE_PWR_DOWN);
}

void sleep_task(void){
	if (RELAIS_STATUS_AUS == relais.Status)
		sleep_mode();
}