#include "inverter.h"

inverter::inverter(float EBvolt, float Vin, float ECB){
  this->T = transistor( 0.6, ECB );
  this->T.setEBvoltage( EBvolt );
  this->T.setECvoltage( Vin );
  this->Vin = Vin;
  inverter::calculateOutput();
}
void inverter::setInput(float EBvolt){
  this->T.setEBvoltage(EBvolt );
  inverter::calculateOutput();
}
float inverter::getOutput(){
return this->Vout;
}
void inverter::calculateOutput(){
  if( this->T.currentFlowing() ){
    this->Vout = 0;
  } else {
    this->Vout = Vin;
}

}
