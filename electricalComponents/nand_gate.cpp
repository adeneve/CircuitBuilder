#include "nand_gate.h"

nand_gate::nand_gate(float EBvolt1,float EBvolt2,float Vin, float ECB){
this->AND = and_gate( EBvolt1, EBvolt2, Vin, ECB);
this->Inv = inverter(this->AND.getOutput(), Vin, ECB);
}

void nand_gate::setInputs(float i1, float i2){
this->AND.setInputs(i1, i2);
this->Inv.setInput(this->AND.getOutput());
}

float nand_gate::getOutput(){
return this->Inv.getOutput();
}
