#ifndef _SENSOR_H_
#define _SENSOR_H_

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
    Method that returns the sensor reading.
  */
  double get_reading(void);
};

#endif // _SENSOR_H_