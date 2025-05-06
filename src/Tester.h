//
// Created by david on 2/05/2025.
//

#ifndef TESTER_H
#define TESTER_H
#include "Empleado.h"
#include <iostream>
#include <string>
using namespace std;


class Tester : public Empleado {
public:
  Tester(int salario, double bono);
  double calcularNominaTester();
};


#endif //TESTER_H
