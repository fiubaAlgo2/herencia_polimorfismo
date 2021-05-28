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
    uint64_t legajo();
    std::string nombre();
    std::string apellido();
    uint64_t salario();
    uint64_t antiguedad();

public:
    Parser(char** argv);

    Empleado* procesarEntrada();
};


#endif //H_P_PARSER_H
