/***************************************************************************
	Voltage_Sensor.h
	Author: Meghadoot
  	2018-11-19
	
	This is a library for the Voltage sensor.
	Voltage sensor use voltage divider to sense voltage, ADC is required to interface.
	Designed specifically to work with the Arduino Boards.
	
    Copyright (C) 2018  Meghadoot Gardi.  All right reserved.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

 ***************************************************************************/

#ifndef _Current_Sensor_h
#define _Current_Sensor_h

#include "Arduino.h"

/*=========================================================================
    MACRO DECLARATIONS
    -----------------------------------------------------------------------*/
    #define MAX_OUTPUT        5.0
    #define MAX_RANGE         1023.0
    #define MIN_OUTPUT        0.01 
    #define MIN_RANGE         0.0
	
    #define __Current_Sensor_debug           DISABLED
/*=========================================================================*/

/**
 * @brief Sensor connection type.
 */
typedef enum sensor_connection_types 
{
	PULL_UP,				/**< Pull up connection of sensor (resistor across which voltage is to be meaasured) */
	PULL_DOWN				/**< Pull down connection of sensor (resistor across which voltage is to be meaasured) */
} sensor_connection_types_t;


class Current_Sensor
{
  public:
    Current_Sensor(int pin);	/**< constructor */
	Current_Sensor(int pin,float gain);	/**< constructor */
    float calculate_Current();
    float fmap(float x, float in_min, float in_max, float out_min, float out_max);

  private:
    int _pin;			/**< Analog Pin number */
	int _gain;			/**< Current IC gain */	
};

#endif

