/*
 * SoftwareTimer.c
 *
 *  Created on: Sep 28, 2022
 *      Author: DELL
 */
#include "SoftwareTimer.h"
int counter;
int timer_flag;
void setTimer(int duration){
	counter=duration/10;
	timer_flag=0;
}
void TimerRun(){
	if(counter>0){
		counter--;
		if(counter<=0){
			timer_flag=1;
		}
	}

}


