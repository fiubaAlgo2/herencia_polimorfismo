//
// Created by carolina on 20/5/21.
//

#ifndef UNTITLED_EMPLEADO_H
#define UNTITLED_EMPLEADO_H

#include<iostream>

class Empleado {
protected:
    uint64_t legajo;
    std::string nombre;
    std::string apellido;
    uint64_t salario;
    uint64_t antiguedad;

public:
    Empleado(uint64_t legajo, std::string nombre, std::string apellido, uint64_t salario, uint64_t antiguedad);

    void visualizarCaracteristicas();
    virtual void incrementarSalario() = 0;
};


#endif //UNTITLED_EMPLEADO_H
