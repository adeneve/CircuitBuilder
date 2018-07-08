#include "and_gate.h"
#include "inverter.h"

class nand_gate {

public:
  nand_gate();
  nand_gate(float EBvolt1, float EBvolt2 ,float Vin,float ECB);
  void setInputs(float i1, float i2);
  float getOutput();

private:
  and_gate AND;
  inverter Inv;
};
