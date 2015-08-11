/*
 * GPS.h
 *
 *  Created on: 27/07/2015
 *      Author: david
 */
#include<stdio.h>
#ifndef GPS_H_
#define GPS_H_
#define NMEA_MODE "$PMTK314,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0*28\r\n"
#define UPDATE_200_msec "$PMTK220,200*2C\r\n"
#define Measure_200_msec "$PMTK220,200*2C\r\n"
#define Baud_9600 "$PMTK251,57600*2C\r\n"
#define GPS_sensor "/dev/ttyO4"

typedef struct{
	char *longitude;
	char *latitude;
	char *altitude;
	char *GGA;//mensaje del GPS

}GPS;
#endif /* GPS_H_ */
