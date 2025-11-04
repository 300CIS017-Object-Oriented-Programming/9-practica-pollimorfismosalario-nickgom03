//
// Created by ng573 on 1/11/2025.
//

#include "DesarrolladorSenior.h"
#include <iostream>

DesarrolladorSenior::DesarrolladorSenior(std::string id, std::string nombre, bouble salarioBase):Empleado(std::move(id), std::move(nombre), salarioBase) {

}

double DesarrolladorSenior::calcularSalario() const {
    return getSalarioBase() * 1.20;
}

void DesarrolladorSenior::mostrarInfo() const {
	std::cout << "[Tipo] Desarrollador Senior (bono 20%)\n";
	Empleado::mostarInfo();
}