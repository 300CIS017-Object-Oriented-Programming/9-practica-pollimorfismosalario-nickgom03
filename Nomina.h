//
// Created by ng573 on 3/11/2025.
//

#ifndef INC_9_PRACTICA_POLLIMORFISMOSALARIO_NICKGOM03_NOMINA_H
#define INC_9_PRACTICA_POLLIMORFISMOSALARIO_NICKGOM03_NOMINA_H

#include <vector>
#include <memory>
#include "Empleado.h"
#include "DesarrolladorJunior.h"
#include "DesarrolladorSenior.h"
#include "LiderTecnico.h"
#include "Tester.h"

class Nomina {
private:
    std::vector<std::unique_ptr<Empleado>> listaEmpleados;

public:
    Nomina() = default;
    ~Nomina() = default;

    void inicializarDatos();
    void registrarEmpleado(std::unique_ptr<Empleado> empleado);
    double totalPagar() const;
    void mostrarEmpleados() const;
};
#endif //INC_9_PRACTICA_POLLIMORFISMOSALARIO_NICKGOM03_NOMINA_H