/*
 * PIDreglib.c
 *
 *  Created on: 12/07/2015
 *      Author: david
 */

#include <Control_Layer/MotorMix.h>
#include <Control_Layer/PIDreglib.h>

//regulate roll pitch y yaw rates.
void regulate(float des[3], float med[3]){
	//error calculation in 3D
	error[0]=des[0]-med[0];//roll
	error[1]=des[1]-med[1];//pitch
	error[2]=des[2]-med[2];//yaw

	//Derivative component of a PID in 3D
	D[0]=error[0]-errorviejo[0];//roll
	D[1]=error[1]-errorviejo[1];//pitch
	D[2]=error[2]-errorviejo[2];//yaw

	//Integral component of a PID in 3D
	I[0]=error[0]+I[0];//roll
	I[1]=error[1]+I[1];//pitch
	I[2]=error[2]+I[2];//yaw

	//3D PID
	PID[0]=Kp[0]*error[0]+Kd[0]*D[0]+Ki[0]*I[0];//roll
	PID[1]=Kp[1]*error[1]+Kd[1]*D[1]+Ki[1]*I[1];//pitch
	PID[2]=Kp[2]*error[2]+Kd[2]*D[2]+Ki[2]*I[2];//yaw

	//old error save in 3D
	errorviejo[1]=error[1];
	errorviejo[2]=error[2];
	errorviejo[0]=error[0];
	//sending the compensation values to the 3D PWM conversion module
	compensateMotorMix(PID[0],PID[1],PID[2]);
}
