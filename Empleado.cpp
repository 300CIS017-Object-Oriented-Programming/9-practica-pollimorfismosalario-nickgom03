//
// Created by ng573 on 1/11/2025.
//

#include "Empleado.h"
#include <iomanip>

Empleado::Empleado(std::string id, std::string nombre, double salarioBase) {
    this->id = id;
    this->nombre = nombre;
    this->salarioBase = salarioBase;
}

Empleado::~Empleado() = default;

std::string Empleado::getNombre() const{
    return nombre;
}

std::string Empleado::getId() const{
    return id;
}

double Empleado::getSalarioBase() const{
    return salarioBase;
}

void Empleado::mostrarInfo() const {
    std::cout<<"Empleado: " << getNombre() <<std::endl;
    std::cout<<"Empleado id: " << getId() <<std::endl;
    std::cout<<"Empleado salario: " << getSalarioBase() <<std::endl;
    std::cout << std::fixed << std::setprecision(2);
}
