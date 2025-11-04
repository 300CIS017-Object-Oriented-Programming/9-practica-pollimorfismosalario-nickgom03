//
// Created by ng573 on 1/11/2025.
//

#ifndef INC_9_PRACTICA_POLLIMORFISMOSALARIO_NICKGOM03_DESARROLLADORJUNIOR_H
#define INC_9_PRACTICA_POLLIMORFISMOSALARIO_NICKGOM03_DESARROLLADORJUNIOR_H

#include "Empleado.h"
#include <string>

class DesarrolladorJunior : public Empleado {
public:
    DesarrolladorJunior(std::string id, std::string nombre, double salarioBase);
    double calcularSalario() const override;
    void mostrarInfo() const override;
};

#endif //INC_9_PRACTICA_POLLIMORFISMOSALARIO_NICKGOM03_DESARROLLADORJUNIOR_H