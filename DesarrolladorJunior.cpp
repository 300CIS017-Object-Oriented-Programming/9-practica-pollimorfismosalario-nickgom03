//
// Created by ng573 on 1/11/2025.
//

#include "DesarrolladorJunior.h"
#include <iostream>

DesarrolladorJunior::DesarrolladorJunior(std::sring id, std::string nombre, double salarioBase):Empleado(std::move(id), std::move(nombre), salarioBase) {

}

double DesarrolladorJunior::calcularSalario() const {
    return getSalarioBase;
}

void DesarrolladorJunior::mostrarInfo() const{
	std::cout << "[Tipo] Desarrollador Junior\n";
	Empleado::mostrarInfo();
}