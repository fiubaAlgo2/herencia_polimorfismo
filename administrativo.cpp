//
// Created by carolina on 20/5/21.
//

#include "administrativo.h"

Administrativo::Administrativo(uint64_t legajo, std::string nombre, std::string apellido, uint64_t salario, uint64_t antiguedad)
        :Empleado(legajo, nombre, apellido, salario, antiguedad)
{

}

void Administrativo::incrementarSalario()
{
    this->salario = this->salario * 1.2;
}