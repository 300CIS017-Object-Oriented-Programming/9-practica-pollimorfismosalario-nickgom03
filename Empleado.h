//
// Created by ng573 on 1/11/2025.
//

#ifndef INC_9_PRACTICA_POLLIMORFISMOSALARIO_NICKGOM03_EMPLEADO_H
#define INC_9_PRACTICA_POLLIMORFISMOSALARIO_NICKGOM03_EMPLEADO_H

#include <iostream>
#include <string>

class Empleado
{
private:
    std::string nombre;
    std::string id;
    double salarioBase;
public:
    Empleado(string id, string nombre, double salarioBase);
    virtual ~Empleado() = default;
    std::string getNombre(); const
    std::string getId(); const
    double getSalario(); const
    virtual double calcularSalario() const = 0;
    virtual void mostrarInfo() const;
};

#endif //INC_9_PRACTICA_POLLIMORFISMOSALARIO_NICKGOM03_EMPLEADO_H