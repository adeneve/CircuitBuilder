#include "electricalComponents/and_gate.h"
#include <string>

int main(){
  and_gate AND = and_gate( 0.6, 0.6, 10, 10);
  AND.setInputs(0.6, 0.6);
  printf("the output is %f \n", AND.getOutput());
  return 0;
}
