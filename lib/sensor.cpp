#include "sensor.h"
#include "iostream"

using namespace std;

/**
  Public methods of the Sensor class.
*/

Sensor::Sensor(I2CBus bus, int address) {
  this->bus = bus;
  this->address = address;
}