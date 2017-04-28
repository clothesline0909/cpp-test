#include "iostream"
#include "sensors.h"
#include "i2c_configuration.h"

using namespace std;

int main(void) {

  double STEFAN_BOLTZMANN_CONST = 5.7e-12;
  double emissivity = 0.95;

  int address = 0x40;

  double constant = STEFAN_BOLTZMANN_CONST * emissivity;

  I2CConfiguration i2c_config;
  I2CBus i2c_bus(i2c_config, 0x00, 0x01);

  TMP006 tmp006(i2c_bus, address, constant);

  double reading = tmp006.get_reading();

  cout << "Reading: " << reading << endl;

  return 0;
}