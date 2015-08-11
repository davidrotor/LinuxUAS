/*
 ============================================================================
 Name        : AVCDrone.c
 Author      : David Rodriguez
 Version     :
 Copyright   : Propiedad de David Rodriguez se reserva el derecho a distribucion o copia de este software
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
 ============================================================================
 Name        : HWTest.c
 Author      : David Rodriguez
 Version     :
 Copyright   : Propiedad de David Rodriguez se reserva el derecho a distribucion o copia de este software
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <Control_Layer/MotorMix.h>
#include <Control_Layer/PIDreglib.h>
#include <HardwareLayer/Motor.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <rotacion.h>
#include<termios.h>

void main(void){
	/*armMotor();
	dutySet(pwm1, 250);
	sleep(2);
	dutySet(pwm1,5000);*/

	motorinit();
}
