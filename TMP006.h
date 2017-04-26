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
  Public methods of the TMP006 class.
*/
public:

  /**
    TMP006 constructor.

    @param address the address of the sensor.
    @param constant the calibration constant for the sensor.
  */
  TMP006(double constant, int address);

  /**
    Method that returns the address of the sensor.
  */
  int get_address(void);
  
  /**
    Method that returns the sensor reading.
  */
  double get_reading(void);

/**
  Private methods of the TMP006 class.
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
  double constant;

  // The address of the sensor.
  int address;
};

#endif // _TMP006_H_