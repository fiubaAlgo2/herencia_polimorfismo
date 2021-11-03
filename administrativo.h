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
    Administrativo(unsigned int legajo, std::string nombre, std::string apellido, float salario, unsigned int antiguedad);

    void incrementarSalario();

    ~Administrativo(){};
};


#endif //UNTITLED_ADMINISTRATIVO_H
