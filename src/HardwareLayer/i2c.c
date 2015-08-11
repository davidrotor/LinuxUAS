/*
 * i2c.c
 *
 *  Created on: 27/07/2015
 *      Author: david
 */

#include <HardwareLayer/i2c.h>
int decifrarACC(int A, int B){
	return A<<8 +B;
}
//i2c sensor address init
i2c sensores;
void i2cinit(){

	sensores.acc=0x53;
	sensores.gyro=105;
	sensores.brujula=30;
	sensores.baro=119;
	sensores.device="/dev/i2c-2";

}

