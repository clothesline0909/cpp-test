#include "i2c_bus.h"
#include "iostream"

using namespace std;

/**
  Public methods of the I2CBus class.
*/

I2CBus::I2CBus(I2CConfiguration config, int index) : config(config), index(index) {}

void open() {
	// Create the I2CParams object for compatibility.
	I2CParams i2c_params = {
		transferMode: config.get_transfer_mode(),
		callbackFxn: NULL,
		bitRate: config.get_bit_rate()
	}

	// Get a handle to the I2C bus.
	I2CHandle bus_handle = I2C_Open(this->index, &i2c_params);
}