//
// Created by carolina on 29/10/20.
//

#ifndef UNTITLED4_PARSER_H
#define UNTITLED4_PARSER_H

#include "vehiculo.h"
#include <string>

class Parser {
private:

public:
    char** entrada;
    Parser(char **argv);
    Vehiculo* procesar_entrada(char **argv);
    std::string tipo_vehiculo();
    float cilindrada();
    int kilometraje();
    float combustible();

};


#endif //UNTITLED4_PARSER_H
