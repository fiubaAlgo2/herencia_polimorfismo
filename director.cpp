//
// Created by carolina on 20/5/21.
//

#include "director.h"

Director::Director(unsigned int legajo, std::string nombre, std::string apellido, float salario, unsigned int antiguedad)
    :Empleado(legajo, nombre, apellido, salario, antiguedad)
{

}

void Director::incrementarSalario()
{
    this->salario = this->salario * 1.1f;
}