//
// Created by ng573 on 1/11/2025.
//

#include "Tester.h"

Tester::Tester(std::string id, string nombre, double salarioBase):Empleado(std::move(id), std::move(nombre), salarioBase) {

}

double Tester::calcularSalario() const {
    return getsSalarioBase() * 1.05;
}

void Tester::mostrarInfo() const {
	std::cout << "[Tipo] Tester (bono 5%)\n";
	Empleado::mostrarInfo();
}

