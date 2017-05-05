/**
  i2c_bus.h
  Purpose: Represents an I2C bus.

  @author Brett Clark
  @version 1.0
  @date 3/5/2017
*/

#ifndef _I2C_BUS_H_
#define _I2C_BUS_H_

#include "i2c_configuration.h"

/**
  I2CBus class.

  This describes the I2C configuration.
*/
class I2CBus {

/**
  Public members of the I2CBus class.
*/
public:

  /**
    I2CBus constructor.

    @param config The I2CConfiguration used by the bus.
    @param data_address The line used for I2C data transfer.
    @param clock_address The line user for I2C clock signal.
    @return The I2CBus object.
  */
  I2CBus(I2CConfiguration config, int data_address, int clock_address);

  /**
    Method that returns the I2C bus data line address.

    @return The I2C bus data line address.
  */
  int get_data_address(void);

  /**
    Method that returns the I2C bus clock line address.

    @return The I2C bus clock line address.
  */
  int get_clock_address(void);

/**
  Private members of the I2CBus class.
*/
private:

  /**
    Member variables of the I2CBus class.
  */

  /**
    The I2C configuration for the bus.
  */
  I2CConfiguration config;

  /**
    The I2C bus data line address.
  */
  int data_address;

  /**
    The I2C bus clock line address.
  */
  int clock_address;
};

#endif // _I2C_BUS_H_