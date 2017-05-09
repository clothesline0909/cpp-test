#include "i2c_bus.h"
#include "iostream"

using namespace std;

/**
  Public methods of the I2CBus class.
*/

I2CBus::I2CBus(I2CConfiguration config, int index) : config(config), index(index) {}
