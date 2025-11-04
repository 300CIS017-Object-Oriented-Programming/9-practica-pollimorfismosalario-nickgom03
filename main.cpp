//
// Created by ng573 on 3/11/2025.
//
#include "Nomina.h"
#include <iostream>

int main() {
    Nomina nomina;

    nomina.inicializarDatos();
    nomina.mostrarEmpleados();
    std::cout << "===========================\n";
    std::cout << "Total a pagar: $" << nomina.totalPagar() << "\n";
    std::cout << "===========================\n";

    return 0;
}
