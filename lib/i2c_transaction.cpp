#include "i2c_transaction.h"

I2CTransaction I2CConfiguration::get_transaction(boolean direction) {
  return I2CTransaction transaction(direction);
}