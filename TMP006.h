#ifndef _TMP006_H_
#define _TMP006_H_

#include "sensor.h"
#include "string"
#include "iostream"

using namespace std;

// CLASS DEFINTIONS

class TMP006 : public Sensor {
public:
  TMP006();
  double get_reading(void);
  void print() {
    cout << "Sensor: " << NAME << endl;
  }
private:
  static const string NAME;
};

#endif // _TMP006_H_