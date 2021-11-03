//
// Created by carolina on 20/5/21.
//

#ifndef H_P_PARSER_H
#define H_P_PARSER_H

#include "empleado.h"
#include<iostream>

class Parser
{
private:
    char** entrada;
    std::string tipoDeEmpleado();
    unsigned int legajo();
    std::string nombre();
    std::string apellido();
    float salario();
    unsigned int antiguedad();

public:
    Parser(char** argv);

    Empleado* procesarEntrada();
};


#endif //H_P_PARSER_H
