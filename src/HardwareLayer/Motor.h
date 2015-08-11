#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <linux/i2c-dev.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <termios.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifndef INTERFACE
#define INTERFACE
#endif
void armMotors();
void motorinit();
//pendiente e intercepto de los pwms
#define b 1600000
#define pend 400

//cape manager
#define capemgr "/sys/devices/bone_capemgr.9/slots"
//cape que queremos cargar
#define pwmcape "cape-universaln"
//UART principio

typedef struct{
	FILE* file;
	char* PATH;
	char* period;
	int periodVal;
	char* duty;
	int dutyVal;
	char* run;
	int runVal;
}pwm;
pwm pwm1;
pwm pwm2;
pwm pwm3;
pwm pwm4;
void configure();





//UART connect


