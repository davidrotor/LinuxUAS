/*
 * PIDreglib.h
 *
 *  Created on: 12/07/2015
 *      Author: david
 */

#ifndef PIDREGLIB_H_
#define PIDREGLIB_H_


float error[3];
float Kp[3],Kd[3],Ki[3];
float PID[3];
float errorviejo[3];
float D[3],PID[3], I[3];
void regulate(float des[3], float med[3]);

#endif /* PIDREGLIB_H_ */
