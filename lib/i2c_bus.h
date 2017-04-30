#ifndef _I2C_BUS_H_
#define _I2C_BUS_H_

#include "i2c_configuration.h"

/**
  I2CBus class.

  This describes the I2C configuration.
*/
class I2CBus {

/**
  Public methods of the I2CBus class.
*/
public:

  /**
    I2CBus constructor.

    @param config the I2CConfiguration used by the bus.
    @param data_line the line used for I2C data transfer.
    @param clock_line the line user for I2C clock signal.
  */
  I2CBus();
  I2CBus(I2CConfiguration config, int data_line, int clock_line);

/**
  Private members of the TMP006 class.
*/
private:

  /**
    Member variables of the TMP006 class.
  */

  // The I2C configuration.
  I2CConfiguration config;

  // The data line address.
  int data_line;

  // The clock line address.
  int clock_line;
};

#endif // _I2C_BUS_H_