/*
 * i2c.h
 *
 *  Created on: 27/07/2015
 *      Author: david
 */

#ifndef I2C_H_
#define I2C_H_
void i2cWrite();
#define DEVID 0x00
#define BUFFER_SIZE 40
int decifrarACC(int A, int B);
typedef struct{
	int acc;
	int gyro;
	int brujula;
	int baro;
	char* device;
	char readbuffer[BUFFER_SIZE];
	char writeBuffer[1];
}i2c;
void i2cinit();
#endif /* I2C_H_ */
