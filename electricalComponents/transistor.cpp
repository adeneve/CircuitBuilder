#include "transistor.h"

transistor::transistor(){};

transistor::transistor(float EBV_Barrier, float ECV_Barrier){
  this->EBvoltageBarrier = EBV_Barrier;
  this->ECvoltageBarrier = ECV_Barrier;
}

bool transistor::currentFlowing(){
  return (this->EBvoltage >= this->EBvoltageBarrier && 
          this->ECvoltage >= this->ECvoltageBarrier);
}

void transistor::setEBvoltage(float V){
  this->EBvoltage = V;
}

void transistor::setECvoltage(float V){
  this->ECvoltage = V;
}
