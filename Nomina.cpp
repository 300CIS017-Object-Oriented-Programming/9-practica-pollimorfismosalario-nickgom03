//
// Created by ng573 on 3/11/2025.
//

#include "Nomina.h"
#include <iostream>
#include <iomanip>

void Nomina::inicializarDatos() {
    listaEmpleados.push_back(std::make_unique<DesarrolladorJunior>("1234", "Ana Gómez", 1500000));
    listaEmpleados.push_back(std::make_unique<DesarrolladorSenior>("5678", "Diego Torres", 2200000));
    listaEmpleados.push_back(std::make_unique<LiderTecnico>("7894", "Laura Salas", 3000000));
    listaEmpleados.push_back(std::make_unique<Tester>("4568", "Camilo Ríos", 1200000));
}

void Nomina::registrarEmpleado(std::unique_ptr<Empleado> empleado) {
    listaEmpleados.push_back(std::move(empleado));
}

double Nomina::totalPagar() const {
    double total = 0.0;
    for (const auto& emp : listaEmpleados) {
        total += emp->calcularSalario();
    }
    return total;
}

void Nomina::mostrarEmpleados() const {
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "==== Empleados en nómina ====\n\n";
    for (const auto& emp : listaEmpleados) {
        emp->mostrarInfo();
        std::cout << "Salario calculado: $" << emp->calcularSalario() << "\n";
    }
}
