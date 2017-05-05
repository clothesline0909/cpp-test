#include "tmp006.h"
#include "cmath"
#include "iostream"

using namespace std;

/**
  Constants of the TMP006 class.
*/

static const int SENSOR_VOLTAGE_REGISTER = 0x00;
static const int DIE_TEMP_REGISTER = 0x01;
static const int CONFIG_REGISTER = 0x02;

/**
  Public methods of the TMP006 class.
*/

TMP006::TMP006(I2CBus bus, int address, double constant) : I2CSensor(bus, address), constant(constant) {}

double TMP006::get_reading(void) {
  double sensor_voltage = get_sensor_voltage();
  double die_temperature = get_die_temperature();

  double object_temp = get_object_temperature(sensor_voltage, die_temperature);

  return object_temp;
}

/**
  Private methods of the TMP006 class.
*/

double TMP006::get_sensor_voltage(void) {
  return 3.5;
}

double TMP006::get_die_temperature(void) {
  return 290.1;
}

double TMP006::get_object_temperature(double sensor_voltage, double die_temperature) {
  double object_temp_power_4 = pow(die_temperature, 4) + (sensor_voltage / this->constant);

  // Handle negative reading.
  if (object_temp_power_4 < 0) {
    return NULL;
  }

  return pow(object_temp_power_4, 1.0 / 4);
}
