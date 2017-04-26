#include "TMP006.h"
#include "iostream"

using namespace std;

// CONSTANTS

const string TMP006::NAME = "TMP006";
static const int SENSOR_VOLTAGE_REGISTER = 0x00;
static const int DIE_TEMP_REGISTER = 0x01;
static const int CONFIG_REGISTER = 0x02;

// PUBLIC METHODS

TMP006::TMP006(double constant, int address) {
  this->constant = constant;
  this->address = address;
}

int TMP006::get_address(void) {
  return this->address;
}

double TMP006::get_reading(void) {
  return 1.5;
}
