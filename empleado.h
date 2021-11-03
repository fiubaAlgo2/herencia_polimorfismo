//
// Created by carolina on 20/5/21.
//

#ifndef UNTITLED_EMPLEADO_H
#define UNTITLED_EMPLEADO_H

#include<iostream>

class Empleado {
protected:
    unsigned int legajo;
    std::string nombre;
    std::string apellido;
    float salario;
    unsigned int antiguedad;

public:
    Empleado(unsigned int legajo, std::string nombre, std::string apellido, float salario, unsigned int antiguedad);

    void visualizarCaracteristicas();
    virtual void incrementarSalario() = 0;

    virtual ~Empleado(){};
};


#endif //UNTITLED_EMPLEADO_H
