/*
 * GPS_2.h
 *
 * Created: 6/29/2024 1:14:48 PM
 *  Author: 19024
 */ 


#ifndef GPS_2_H_
#define GPS_2_H_

#include "FreeRTOS.h"


//#define size_t unsigned long
//#define uint8_t unsigned char

//
//#include <inttypes.h>
//#include "sail_types.h"

extern enum status_code GPS2_init(void); // initialize I2C bus
extern enum status_code write(uint8_t c); // write to slave
extern size_t available(void); // check is data available from slave
extern size_t read(size_t *data); //read from slave

#endif /* GPS_2_H_ */