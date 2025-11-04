//
// Created by ng573 on 1/11/2025.
//

#ifndef INC_9_PRACTICA_POLLIMORFISMOSALARIO_NICKGOM03_TESTER_H
#define INC_9_PRACTICA_POLLIMORFISMOSALARIO_NICKGOM03_TESTER_H

#include "Empleado.h"
#include <string>

class Tester : public Empleado{
public:
    Tester(std::string nombre, std::string id, double salarioBase);
    double calcularSalario() const override;
    void mostrarInfo() const override;
};

#endif //INC_9_PRACTICA_POLLIMORFISMOSALARIO_NICKGOM03_TESTER_H