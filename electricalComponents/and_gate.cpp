#include "and_gate.h"

and_gate::and_gate(float EBvolt1, float EBvolt2, float Vin, float ECB){
  this->T1 = transistor( 0.6, ECB );
  this->T2 = transistor( 0.6, ECB );
  this->T1.setEBvoltage( EBvolt1 );
  this->T1.setECvoltage( Vin );
  this->T2.setEBvoltage( EBvolt2 );
  if( this->T1.currentFlowing() ) {
    this->T2.setECvoltage( Vin );
  } else {
    this->T2.setECvoltage( 0 );
  }
  if(this->T2.currentFlowing()) {this->Vout = Vin;}
  else {this->Vout = 0;}
}

float and_gate::getOutput(){
  return this->Vout;
}


