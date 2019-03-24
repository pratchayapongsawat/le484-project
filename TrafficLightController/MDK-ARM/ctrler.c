#include "ctrler.h"
#include "bsp.h"
#include <stdio.h>

Ctrler_State_t Ctrler_State = RESTART;

void Ctrler_Init()
{
}

uint32_t Ctrler_Exec(Event_t evt)
{
	uint32_t timeout_value = 0;
	
	switch(Ctrler_State){
		case RESTART:
			if(evt == NO_EVT){
				Ctrler_State = THROUGH;
				timeout_value = 10;
				Signal_Flash();
			}
			break;
		case THROUGH:
			if(evt != BUTTON){
				Ctrler_State = THROUGH;
				timeout_value = 20;
				Signal_Pass();
			}
			break;
		case BLOCKED:
			if(evt == TIMEOUT){
				Ctrler_State = THROUGH;
				Signal_Block();
			}
			break;
		case WAIT:
			break;
		default:
			Ctrler_State = OUT_OF_SERVICE;
	}
	return timeout_value;
}