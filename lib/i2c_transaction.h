/**
  i2c_transaction.h
  Purpose: Carries out an I2C transaction between master and slave.

  @author Brett Clark
  @version 1.0
  @date 3/5/2017
*/

#ifndef _I2C_TRANSACTION_H_
#define _I2C_TRANSACTION_H_

#include "i2c_bus.h"

/**
  I2CTransaction class.

  This describes a single I2C transaction.
*/
class I2CTransaction {

/**
  Public methods of the I2CTransaction class.
*/
public:

  /**
    I2CTransaction constructor.

    @param bus The bus on which the transaction will be performed.
    @param address The address of the slave.
    @return The I2CTransaction object.
  */
  I2CTransaction(I2CBus bus, int address);
}

#endif // _I2C_TRANSACTION_H_