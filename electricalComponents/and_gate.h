#include "transistor.h"

class and_gate{

public:
  and_gate(float EBvolt1, float EBvolt2, float Vin, float ECB);
  void setInputs(float i1, float i2);
  void calculateOutput();
  float getOutput();

private:
  transistor T1;
  transistor T2;
  float Vin;
  float Vout;
};
