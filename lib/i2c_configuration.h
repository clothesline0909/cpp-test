#ifndef _I2C_CONFIGURATION_H_
#define _I2C_CONFIGURATION_H_

/**
  I2CConfiguration class.

  This describes the I2C configuration.
*/
class I2CConfiguration {

/**
  Public methods of the I2CConfiguration class.
*/
public:

  /**
    I2CConfiguration constructor.

    @param address the address of the sensor.
    @param constant the calibration constant for the sensor.
  */
  I2CConfiguration::I2CConfiguration(void);

  /**
    Method that returns a new I2C transaction.

    @param direction the direction of data flow (read/write).
  */
  I2CTransaction get_transaction(boolean direction) {
    return I2CTransaction transaction(direction);
  }

};

#endif // _I2C_CONFIGURATION_H_