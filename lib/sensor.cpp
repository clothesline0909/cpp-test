#include "sensor.h"
#include "iostream"

using namespace std;

/**
  Public methods of the Sensor class.
*/

Sensor::Sensor(I2CBus bus, int address) : bus(bus), address(address) {}

I2CBus Sensor::get_bus(void) {
  return this->bus;
}

double Sensor::get_address(void) {
  return this->address;
}