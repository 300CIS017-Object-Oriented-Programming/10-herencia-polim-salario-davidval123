//
// Created by david on 2/05/2025.
//

#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <iostream>
#include <string>
using namespace std;


class Empleado {
  private:
    int salarioBase;
    double bono;
  public:
    Empleado(int salario, double bono);
    int getSalario(){return salarioBase;}
    double const getBono(){return bono;}


};



#endif //EMPLEADO_H
