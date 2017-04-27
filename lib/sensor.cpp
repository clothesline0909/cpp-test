#include "sensor.h"
#include "iostream"

using namespace std;

Sensor::Sensor() {
  cout << "Constructing sensor object.\n";
}

double Sensor::get_reading(void) {
  return 1.5;
}