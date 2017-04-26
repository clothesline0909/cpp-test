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
  double v_sense = 3.5;
  double t_die = 290.1;

  double t_object = convert(v_sense, t_die);

  return t_object;
}

double TMP006::convert(double v_sense, double t_die) {
  double t_object_power_4 = pow(t_die, 4) + (v_sense / this->calibration_constant);

  // Handle negative reading.
  if (t_object_power_4 < 0) {
    return NULL;
  }

  return pow(t_object_power_4, 1 / 4);
}
