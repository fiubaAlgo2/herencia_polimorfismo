//
// Created by carolina on 20/5/21.
//

#ifndef UNTITLED_JEFEDEAREA_H
#define UNTITLED_JEFEDEAREA_H

#include<iostream>
#include "empleado.h"

class JefeDeArea : public Empleado
{
public:
    JefeDeArea(unsigned int legajo, std::string nombre, std::string apellido, float salario, unsigned int antiguedad);

    void incrementarSalario();

    ~JefeDeArea(){};
};


#endif //UNTITLED_JEFEDEAREA_H
