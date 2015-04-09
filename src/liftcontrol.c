/*
 * liftcontrol.c
 *
 *  Created on: Apr 7, 2015
 *      Author: Justin
 */
#include "main.h"
// Right is master while left is slave
extern Semaphore rightSensor;
void masterPID(){
	semaphoreTake(rightSensor, 500);
	semaphoreGive(rightSensor);
}
void slavePID(){
	semaphoreTake(rightSensor,500);
	semaphoreGive(rightSensor);
}
void LiftLeft(int speed){
	motorSet(LIFT_LEFT_TOP, speed);
	motorSet(LIFT_LEFT_MIDDLE, -speed);
	motorSet(LIFT_LEFT_BOTTOM, speed);
}
void LiftRight(int speed){
	motorSet(LIFT_LEFT_TOP, -speed);
	motorSet(LIFT_LEFT_MIDDLE, speed);
	motorSet(LIFT_LEFT_BOTTOM, -speed);
}
