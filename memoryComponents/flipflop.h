#ifndef FLIPFLOP_H
#define FLIPFLOP_H

#include "../electricalComponents/nand_gate.h"
#include "../electricalComponents/inverter.h"

class flipflop {
public:
  flipflop();

private:
nand_gate NAND;
nand_gate NAND2;
};

#endif
