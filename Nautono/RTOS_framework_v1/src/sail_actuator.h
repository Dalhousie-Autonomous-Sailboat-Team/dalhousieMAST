/*! \file sail_actuator.h
    \brief Contains definitions for functions used to get extension of actuator 
*/

#ifndef _SAIL_ACTUATOR_H
#define _SAIL_ACTUATOR_H

#include <asf.h>

extern enum status_code setActuator(float sail_angle);
void Test_Actuator(void);

#endif