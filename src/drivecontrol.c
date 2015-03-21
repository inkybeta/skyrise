/*
 * drivecontrol.c
 *
 *  Created on: Mar 19, 2015
 *      Author: Justin
 */
#include "main.h"

/*Drives in a direction*/
void MoveVertical(int speed){
	motorSet(DRIVE_LEFT_FRONT, speed);
	motorSet(DRIVE_LEFT_BACK, speed);
	motorSet(DRIVE_RIGHT_FRONT, -speed);
	motorSet(DRIVE_RIGHT_BACK, -speed);
}

void MoveHorizontal(int speed){
	motorSet(DRIVE_LEFT_FRONT, -speed);
	motorSet(DRIVE_LEFT_BACK, speed);
	motorSet(DRIVE_RIGHT_FRONT, -speed);
	motorSet(DRIVE_RIGHT_BACK, speed);
}

void Rotate(int speed){
	motorSet(DRIVE_LEFT_FRONT, speed);
	motorSet(DRIVE_LEFT_BACK, speed);
	motorSet(DRIVE_RIGHT_FRONT, speed);
	motorSet(DRIVE_RIGHT_BACK, speed);
}
