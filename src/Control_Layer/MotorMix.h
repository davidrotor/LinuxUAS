/*
 * MotorMix.h
 *
 *  Created on: 13/07/2015
 *      Author: david
 */

#ifndef MOTORMIX_H_
#define MOTORMIX_H_
#define g 9.81 //gravedad
int throttle;
float m;
#define throttle_MAX 1000
#define throttle_MIN 20
int motor;
int left, right, front, rear;
float alpha, theta;
void compensateMotorMix(float val1, float val2, float val3);

#endif /* MOTORMIX_H_ */
