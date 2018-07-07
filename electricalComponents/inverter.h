#include "transistor.h"
class inverter
{
public:
  inverter(float EBvolt, float Vin, float ECB);
  void setInput(float EBvolt);
  float getOutput();
  void calculateOutput();

private:
  transistor T;
  float Vin;
  float Vout;
};
