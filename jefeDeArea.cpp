//
// Created by carolina on 20/5/21.
//

#include "jefeDeArea.h"

JefeDeArea::JefeDeArea(unsigned int legajo, std::string nombre, std::string apellido, float salario, unsigned int antiguedad)
        :Empleado(legajo, nombre, apellido, salario, antiguedad)
{

}

void JefeDeArea::incrementarSalario()
{
    this->salario = this->salario * 1.15f;
}
