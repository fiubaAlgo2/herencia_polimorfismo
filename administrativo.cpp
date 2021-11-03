//
// Created by carolina on 20/5/21.
//

#include "administrativo.h"

Administrativo::Administrativo(unsigned int legajo, std::string nombre, std::string apellido, float salario, unsigned int antiguedad)
        :Empleado(legajo, nombre, apellido, salario, antiguedad) {}

void Administrativo::incrementarSalario()
{
    this->salario = this->salario * 1.2f;
}