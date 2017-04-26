#include "iostream"
#include "sensors.h"
#include "i2c_configuration.h"

using namespace std;

int main(void) {

  double STEFAN_BOLTZMANN_CONST = 5.67e-8;
  double emissivity = 0.95;

  double constant = STEFAN_BOLTZMANN_CONST * emissivity;

  TMP006 tmp006(constant);

  double result = tmp006.get_constant();

  cout << "Constant: " << result << endl;

  return 0;
}