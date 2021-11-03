//
// Created by carolina on 20/5/21.
//

#include "empleado.h"
#include<iostream>
using namespace std;

Empleado::Empleado(unsigned int legajo, std::string nombre, std::string apellido, float salario, unsigned int antiguedad)
{
    this->legajo = legajo;
    this->nombre = nombre;
    this->apellido = apellido;
    this->salario = salario;
    this->antiguedad = antiguedad;
}

void Empleado::visualizarCaracteristicas()
{
    cout << "Legajo: " << legajo << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Apellido: " << apellido << endl;
    cout << "Salario: " << salario << endl;
    cout << "Antiguedad: " << antiguedad << endl;
}
