#include "i2c_bus.h"
#include "iostream"

using namespace std;

/**
  Public methods of the I2CBus class.
*/

I2CBus::I2CBus(I2CConfiguration config, int data_line, int clock_line) {
	cout << "I2CBus constructor." << endl;
  this->config = config;
  this->data_line = data_line;
  this->clock_line = clock_line;
}