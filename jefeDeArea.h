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
    JefeDeArea(uint64_t legajo, std::string nombre, std::string apellido, uint64_t salario, uint64_t antiguedad);

    void incrementarSalario();
};


#endif //UNTITLED_JEFEDEAREA_H
