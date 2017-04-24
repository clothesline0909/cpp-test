#include "iostream"
#include "sensor.h"

using namespace std;

int main(void) {

  cout << "Hello World!\n";

  Sensor sensor;
  Sensor sensor2;

  double temperature = sensor.get_reading();

  cout << "Temperature: " << temperature << endl;

  return 0;
}