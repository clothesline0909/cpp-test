#ifndef _I2C_TRANSACTION_H_
#define _I2C_TRANSACTION_H_

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

    @param direction the direction of data flow (read/write).
  */
  I2CTransaction::I2CTransaction(boolean direction);
}

#endif // _I2C_TRANSACTION_H_