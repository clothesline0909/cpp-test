#include "iostream"
#include "sensors.h"
#include "i2c_configuration.h"

using namespace std;

int main(void) {

  double STEFAN_BOLTZMANN_CONST = 5.67e-8;
  double emissivity = 0.95;

  int address = 0x40;

  double constant = STEFAN_BOLTZMANN_CONST * emissivity;

  TMP006 tmp006(constant, address);

  int other_address = tmp006.get_address();

  cout << "Address: " << other_address << endl;

  return 0;
}