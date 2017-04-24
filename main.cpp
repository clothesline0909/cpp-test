#include "iostream"
#include "sensors.h"
#include "i2c_configuration.h"

using namespace std;

int main(void) {

  cout << "Hello World!\n";

  Sensor sensor;
  Sensor sensor2;

  double temperature = sensor.get_reading();

  cout << "Temperature: " << temperature << endl;

  I2CConfiguration i2c_config(3);

  TMP006 tmp006;

  tmp006.print();

  MCP9808 mcp9808;

  mcp9808.print();

  return 0;
}