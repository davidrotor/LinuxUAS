/*
 * rotacion.c
 *
 *  Created on: 14/07/2015
 *      Author: david
 */


float rotacion[3][3];
void matrizR(int opcion, int angulo){
	if(opcion==1){
		rotacion[0][0]=1;
		rotacion[0][1]=0;
		rotacion[0][2]=0;
		rotacion[1][0]=0;
		rotacion[1][1]=cos((angulo*3.14159)/180);
		rotacion[1][2]=-sin((angulo*3.14159)/180);
		rotacion[2][0]=0;
		rotacion[2][1]=sin((angulo*3.14159)/180);
		rotacion[2][2]=cos((angulo*3.14159)/180);
	}
	if(opcion==2){
		rotacion[0][0]=cos((angulo*3.14159)/180);
		rotacion[0][1]=0;
		rotacion[0][2]=sin((angulo*3.14159)/180);
		rotacion[1][0]=0;
		rotacion[1][1]=1;
		rotacion[1][2]=0;
		rotacion[2][0]=-sin((angulo*3.14159)/180);
		rotacion[2][1]=0;
		rotacion[2][2]=cos((angulo*3.14159)/180);
	}
	if(opcion==3){
		rotacion[0][0]=cos((angulo*3.14159)/180);
		rotacion[0][1]=-sin((angulo*3.14159)/180);
		rotacion[0][2]=0;
		rotacion[1][0]=sin((angulo*3.14159)/180);
		rotacion[1][1]=cos((angulo*3.14159)/180);
		rotacion[1][2]=0;
		rotacion[2][0]=0;
		rotacion[2][1]=0;
		rotacion[2][2]=1;
	}
}
