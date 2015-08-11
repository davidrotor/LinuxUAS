/*
 * MotorMix.c
 *
 *  Created on: 13/07/2015
 *      Author: david
 */
//#include <interface.c>
#include <Control_Layer/MotorMix.h>


void compensateMotorMix(float rollcomp, float pitchcomp,float yawcomp){
	//roll=getRoll();
	//pitch=getPitch();
	//throttle=(int)(m*g)/(cos(roll)*cos(pitch));
	left=throttle + rollcomp + yawcomp;
	right=throttle - rollcomp + yawcomp;
	front=throttle + pitchcomp-yawcomp;
	rear=throttle - pitchcomp-yawcomp;
}

