#include "TMP006.h"
#include "cmath"
#include "iostream"

using namespace std;

// CONSTANTS

const string TMP006::NAME = "TMP006";
static const int SENSOR_VOLTAGE_REGISTER = 0x00;
static const int DIE_TEMP_REGISTER = 0x01;
static const int CONFIG_REGISTER = 0x02;

// PUBLIC METHODS

TMP006::TMP006(double constant, int address) {
  this->calibration_constant = constant;
  this->address = address;
}

int TMP006::get_address(void) {
  return this->address;
}

double TMP006::get_reading(void) {
  double sensor_voltage = get_sensor_voltage();
  double die_temperature = get_die_temperature();

  double object_temp = convert(sensor_voltage, die_temperature);

  return object_temp;
}

double TMP006::get_sensor_voltage(void) {
  return 3.5;
}

double TMP006::get_die_temperature(void) {
  return 290.1;
}

double TMP006::convert(double sensor_voltage, double die_temperature) {
  double object_temp_power_4 = pow(die_temperature, 4) + (sensor_voltage / this->calibration_constant);

  // Handle negative reading.
  if (object_temp_power_4 < 0) {
    return NULL;
  }

  return pow(object_temp_power_4, 1.0 / 4);
}
