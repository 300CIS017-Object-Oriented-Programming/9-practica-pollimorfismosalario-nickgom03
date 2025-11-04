//
// Created by ng573 on 1/11/2025.
//

#include "LiderTecnico.h"
#include <iostream>

LiderTecnico::LiderTecnico(std::string id, std::string nombre, double salarioBase):Empleado(std::move(id), std::move(nombre), salarioBase) {

}

double LiderTecnico::calcularSalario() const {
    return getSalarioBase() * 1.25;
}

void LiderTecnico::mostrarInfo() const {
	std::cout << "[Tipo] Lider Tecnico (bono 25%)\n";
	Empleado::mostrarInfo();
}