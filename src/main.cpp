//
// Created by david on 2/05/2025.
//

#include <iostream>
#include "Senior.h"
#include "Junior.h"
#include "Tester.h"
#include "Lider.h"

int main() {
    int salario = 100;
    int opcion;
    Empleado* Junior1 = new Junior(salario, 1);
    Empleado* Junior2 = new Junior(salario, 1);
    Empleado* Senior1 = new Senior(salario, 1.2);
    Empleado* Senior2 = new Senior(salario, 1.2);
    Empleado* Lider1 = new Lider(salario, 1.25);
    Empleado* Lider2 = new Lider(salario, 1.25);
    Empleado* Tester1 = new Tester(salario, 1.05);
    Empleado* Tester2 = new Tester(salario, 1.05);



    cout << "Elige una Accion" << endl;
    cout << "1. Sacar salario Junior" << endl;
    cout << "2. Sacar salario Senior" << endl;
    cout << "3. Sacar salario Tester" << endl;
    cout << "4. Sacar salario Lider" << endl;
    cout << "5. Salir" << endl;
    cout << "Seleccione una opción: ";
    cin >> opcion;

    switch(opcion) {
        case 1:
            cout << "Calculando salario para Junior..." << endl;
            cout << Junior1->getSalario() * Junior1->getBono() << endl; //se añade la opcion para el Junior2 despues.
            break;
        case 2:
            cout << "Calculando salario para Senior..." << endl;
            cout << Senior1->getSalario() * Senior1->getBono() << endl;
            break;
        case 3:
            cout << "Calculando salario para Tester..." << endl;
            cout << Junior1->getSalario() * Junior1->getBono() << endl;
            break;
        case 4:
            cout << "Calculando salario para Lider..." << endl;
            cout << Lider1->getSalario() * Lider1->getBono() << endl;
            break;
        case 5:
            cout << "Saliendo del programa." << endl;
            break;
        default:
            cout << "Opción inválida." << endl;
            break;
    }

    return 0;







};