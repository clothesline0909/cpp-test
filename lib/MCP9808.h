#ifndef _MCP9808_H_
#define _MCP9808_H_

#include "sensor.h"
#include "string"
#include "iostream"

using namespace std;

// CLASS DEFINITIONS

class MCP9808 : public Sensor {
public:
  MCP9808();
  double get_reading(void);
  void print() {
    cout << "Sensor: " << NAME << endl;
  }
private:
  static const string NAME;
};

#endif // _MCP9808_H_