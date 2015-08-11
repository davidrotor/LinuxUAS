#include<fcntl.h>
#include<sys/ioctl.h>
#include<linux/i2c.h>
#include<linux/i2c-dev.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <HardwareLayer/Motor.h>
#include<termios.h>


void motorinit(){
	//HABILLITO EL USO DE LOS PWM DESDE EL SISTEMA
	configure();


	//configuro cada pin como pwm
	/*system("config-pin -l P9.31 pwm");
	system("config-pin -l P9.29 pwm");
	system("config-pin -l P8.36 pwm");
	system("config-pin -l P8.34 pwm");*/

	//Activo el chip de PWM para poder configurar las senales
	system("echo 0 > /sys/class/pwm/export");
	system("echo 1 > /sys/class/pwm/export");
	system("echo 3 > /sys/class/pwm/export");
	system("echo 4 > /sys/class/pwm/export");
	system("stty -F /dev/ttyO4 raw");
	system("stty -F /dev/ttyO4 9600");
	system("ls /sys/class/pwm");




	//PWM1 init
	pwm1.duty="/duty_ns";
	pwm1.period="/period_ns";
	pwm1.run="/run";
	pwm1.PATH="/sys/class/pwm/pwm0";
	//PWM2 init

	pwm2.duty="/duty_ns";
	pwm2.period="/period_ns";
	pwm2.run="/run";
	pwm2.PATH="/sys/class/pwm/pwm1";
	//PWM3 init

	pwm3.duty="/duty_ns";
	pwm3.period="/period_ns";
	pwm3.run="/run";
	pwm3.PATH="/sys/class/pwm/pwm3";
	//PWM4 init

	pwm4.duty="/duty_ns";
	pwm4.period="/period_ns";
	pwm4.run="/run";
	pwm4.PATH="/sys/class/pwm/pwm4";
}

void configure(){

	FILE* unicape;


	unicape= fopen(capemgr,"w+");
	if(unicape==NULL)
		printf("no se pudo abrir el Capemgr");

	else{
		fseek(unicape,0,SEEK_SET);
		fprintf(unicape, "%s", "cape-universaln");
		fflush(unicape);
		fclose(unicape);
	}
	usleep(25);
	printf("paso");

}

void dutySet(pwm motor, int init){
	char result[50];
	char archivo[50];

	strcpy(result, motor.PATH);
	strcpy(archivo, motor.duty);
	strcat(result, archivo);
	motor.dutyVal=pend*init+b;
	motor.file= fopen(result,"w+");
	if(motor.file==NULL)
				printf("no se pudo setear periodo");

			else{
				fseek(motor.file,0,SEEK_SET);
				fprintf(motor.file, "%i", motor.dutyVal);
				fflush(motor.file);
				fclose(motor.file);
			}
	usleep(25);
}
void periodSet(pwm motor){
	char result[50];
	char archivo[50];
	strcpy(result, motor.PATH);
	strcpy(archivo, motor.period);
	strcat(result, archivo);
	motor.file= fopen(result,"w+");
	if(motor.file==NULL)
			printf("no se pudo setear periodo");

		else{
			fseek(motor.file,0,SEEK_SET);
			motor.periodVal=20000000;
			fprintf(motor.file, "%i", motor.periodVal);
			fflush(motor.file);
			fclose(motor.file);
		}

	usleep(25);
}
void runMotor(pwm motor){
	char result[50];
	char archivo[50];
	strcpy(result, motor.PATH);
	strcpy(archivo, motor.run);
	strcat(result, archivo);
	motor.file= fopen(result,"w+");
	if(motor.file==NULL)
				printf("no se pudo setear periodo");

			else{
				fseek(motor.file,0,SEEK_SET);
				fprintf(motor.file, "%s", "1");
				fflush(motor.file);
				fclose(motor.file);
			}
	usleep(25);
}
void armMotor(){
	//armo motores para el vuelo
	motorinit();
	periodSet(pwm1);
	dutySet(pwm1, 0);
	runMotor(pwm1);
	printf("PWM0 Corriendo");
	periodSet(pwm2);
	dutySet(pwm2, 0);
	runMotor(pwm2);
	printf("PWM1 Corriendo");
	periodSet(pwm3);
	dutySet(pwm3, 0);
	runMotor(pwm3);
	printf("PWM3 Corriendo");
	periodSet(pwm4);
	dutySet(pwm4, 0);
	runMotor(pwm4);
	printf("PWM4 Corriendo");


}

void i2cWrite(){

}
int i2cRead(){

}

void acc(){
}

