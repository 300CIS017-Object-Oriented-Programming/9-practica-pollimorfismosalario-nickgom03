//
// Created by ng573 on 1/11/2025.
//

#ifndef INC_9_PRACTICA_POLLIMORFISMOSALARIO_NICKGOM03_LIDERTECNICO_H
#define INC_9_PRACTICA_POLLIMORFISMOSALARIO_NICKGOM03_LIDERTECNICO_H

#include "Empleado.h"
#include <string>

class LiderTecnico : public Empleado{
public:
    LiderTecnico(std::string nombre, std::string id, double salarioBase);
    double calcularSalario() const override;
    void mostrarInfo() const override;
};

#endif //INC_9_PRACTICA_POLLIMORFISMOSALARIO_NICKGOM03_LIDERTECNICO_H