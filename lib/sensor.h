#ifndef _SENSOR_H_
#define _SENSOR_H_

#include "i2c_bus.h"

/**
  Sensor class.

  This base class describes a sensor.
*/
class Sensor {

/**
  Public members of the Sensor class.
*/
public:

  /**
    Sensor constructor.

    @param bus the bus the sensor is attached to.
    @param address the address of the sensor.
  */
  Sensor(I2CBus bus, int address);

  /**
    Method that returns the sensor bus.
  */
  I2CBus get_bus(void);

  /**
    Method that returns the sensor address.
  */
  double get_address(void);

  /**
    Method that returns the sensor reading.
  */
  virtual double get_reading(void) = 0;

/**
  Private members of the TMP006 class.
*/
private:

  /**
    Member variables of the TMP006 class.
  */

  // The bus that the sensor is connected to.
  I2CBus bus;

  // The address of the sensor.
  int address;
};

#endif // _SENSOR_H_