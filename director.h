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
    Director(unsigned int legajo, std::string nombre, std::string apellido, float salario, unsigned int antiguedad);

    void incrementarSalario();

    ~Director(){};
};


#endif //UNTITLED_DIRECTOR_H
