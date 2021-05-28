//
// Created by carolina on 20/5/21.
//

#ifndef UNTITLED_ADMINISTRATIVO_H
#define UNTITLED_ADMINISTRATIVO_H

#include<iostream>
#include "empleado.h"

class Administrativo : public Empleado
{

public:
    Administrativo(uint64_t legajo, std::string nombre, std::string apellido, uint64_t salario, uint64_t antiguedad);

    void incrementarSalario();
};


#endif //UNTITLED_ADMINISTRATIVO_H
