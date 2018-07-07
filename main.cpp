#include "electricalComponents/and_gate.h"
#include "electricalComponents/inverter.h"
#include <string>

int main(){
  and_gate AND = and_gate( 0.6, 0.6, 10, 10);
  AND.setInputs(0.6, 0.6);
  printf("the output is %f \n", AND.getOutput());
  inverter I = inverter( 0.6, 10, 10);
  I.setInput(0.7);
  printf("the i output is %f \n", I.getOutput());
  return 0;
}
