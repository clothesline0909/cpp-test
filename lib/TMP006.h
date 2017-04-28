#ifndef _TMP006_H_
#define _TMP006_H_

#include "sensor.h"
#include "string"
#include "iostream"

using namespace std;

/**
  TMP006 class.

  This describes a single sensor.
*/
class TMP006 : public Sensor {

/**
  Public members of the TMP006 class.
*/
public:

  /**
    TMP006 constructor.

    @param address the address of the sensor.
    @param constant the calibration constant for the sensor.
  */
  TMP006(I2CBus bus, int address, double constant);

  /**
    Method that returns the address of the sensor.
  */
  int get_address(void);

/**
  Private members of the TMP006 class.
*/
private:

  /**
    Constants of the TMP006 class.
  */

  // The human-readable type of the sensor.
  static const string NAME;

  // The register in which the TMP006 sensor voltage is stored.
  static const int SENSOR_VOLTAGE_REGISTER;

  // The register in which the TMP006 die temperature is stored.
  static const int DIE_TEMP_REGISTER;

  // The register used to configure the TMP006 sensor.
  static const int CONFIG_REGISTER;

  /**
    Member variables of the TMP006 class.
  */

  // The calibration constant of the sensor.
  double calibration_constant;

  /**
    Member functions of the TMP006 class.
  */

  /**
    Method that returns the sensor voltage.
  */
  double get_sensor_voltage(void);

  /**
    Method that returns the die temperature.
  */
  double get_die_temperature(void);

  /**
    Method that converts the sensor and die temperatures into an on object temperature.

    @param sensor_voltage the voltage reading from the sensor.
    @param die_temperature the temperature of the die.
  */
  double convert(double sensor_voltage, double die_temperature);
};

#endif // _TMP006_H_