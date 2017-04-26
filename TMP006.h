#ifndef _TMP006_H_
#define _TMP006_H_

#include "sensor.h"
#include "string"
#include "iostream"

using namespace std;

// CLASS DEFINTIONS

class TMP006 : public Sensor {
public:
  TMP006(double constant);
  double get_constant(void);
private:
  // Constants
  static const string NAME;
  static const int SENSOR_VOLTAGE_REGISTER;
  static const int DIE_TEMP_REGISTER;
  static const int CONFIG_REGISTER;
  // Member Variables
  double constant;
};

#endif // _TMP006_H_