//
// Created by david on 2/05/2025.
//

#ifndef LIDER_H
#define LIDER_H
#include "Empleado.h"
#include <iostream>
#include <string>
using namespace std;


class Lider : public Empleado {
public:
    Lider(int salario, double bono);
    double calcularNominaLider();
};



#endif //LIDER_H
