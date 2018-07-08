#include "electricalComponents/nand_gate.h"
#include "electricalComponents/inverter.h"
#include <string>

int main(){
  nand_gate NAND = nand_gate( 0.6, 0.6, 10, 10);
  NAND.setInputs(0.6, 0.6);
  printf("the output is %f \n", NAND.getOutput());
  inverter I = inverter( 0.6, 10, 10);
  I.setInput(0.7);
  printf("the i output is %f \n", I.getOutput());
  return 0;
}
