//
// Created by carolina on 20/5/21.
//

#ifndef UNTITLED_DIRECTOR_H
#define UNTITLED_DIRECTOR_H

#include<iostream>
#include "empleado.h"

class Director: public Empleado
{

public:
    Director(uint64_t legajo, std::string nombre, std::string apellido, uint64_t salario, uint64_t antiguedad);

    void incrementarSalario();
};


#endif //UNTITLED_DIRECTOR_H
