//
// Created by david on 2/05/2025.
//

#ifndef SENIOR_H
#define SENIOR_H
#include "Empleado.h"
#include <iostream>
#include <string>
using namespace std;


class Senior : public Empleado {
    public:
        Senior(int salario, double bono);
        double calcularNominaSenior();
};



#endif //SENIOR_H
