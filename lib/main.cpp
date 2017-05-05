#include "iostream"
#include "sensors.h"
#include "i2c_configuration.h"
#include "i2c_bus.h"

using namespace std;

int main(void) {

  double STEFAN_BOLTZMANN_CONST = 5.7e-12;
  double emissivity = 0.95;

  int address = 0x40;

  double constant = STEFAN_BOLTZMANN_CONST * emissivity;

  I2CConfiguration i2c_config(I2CConfiguration::BLOCKING_MODE, I2CConfiguration::RATE_100_KHZ);

  I2CBus i2c_bus(i2c_config, 0x03, 0x16);

  TMP006 tmp006(i2c_bus, address, constant);

  int test = tmp006.get_address();

  cout << "Address: " << test << endl;

  I2CBus test2 = tmp006.get_bus();

  int data = test2.get_data_address();
  int clock = test2.get_clock_address();

  cout << "I2C: data - " << data << ", clock - " << clock << endl;

  double reading = tmp006.get_reading();

  cout << "Reading: " << reading << endl;

  return 0;
}