#include "i2c_bus.h"
#include "iostream"

using namespace std;

/**
  Public methods of the I2CBus class.
*/

I2CBus::I2CBus(I2CConfiguration config, int data_address, int clock_address) : config(config), data_address(data_address), clock_address(clock_address) {}

int I2CBus::get_data_address(void) {
  return this->data_address;
}

int I2CBus::get_clock_address(void) {
  return this->clock_address;
}