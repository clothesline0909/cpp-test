#include "iostream"
#include "sensors.h"
#include "i2c_configuration.h"

using namespace std;

int main(void) {

  double STEFAN_BOLTZMANN_CONST = 5.7e-12;
  double emissivity = 0.95;

  int address = 0x40;

  double constant = STEFAN_BOLTZMANN_CONST * emissivity;

  TMP006 tmp006(constant, address);

  double reading = tmp006.get_reading();

  cout << "Reading: " << reading << endl;

  return 0;
}