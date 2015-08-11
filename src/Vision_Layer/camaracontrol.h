/*
 * camaracontrol.h
 *
 *  Created on: 14/07/2015
 *      Author: david
 */

#ifndef CAMARACONTROL_H_
#define CAMARACONTROL_H_
#define time 2
#define command "sudo fswebcam -d /dev/video0 -i 0 -r 1600x1200 --no-banner -- jpeg 0 image.jpg"
#define name "cp image.jpg image_`date +%S%H%M`.jpg"
void captura(char* nombre);



#endif /* CAMARACONTROL_H_ */
