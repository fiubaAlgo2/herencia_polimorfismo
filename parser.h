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
    ~Parser(){};
    Vehiculo* procesarEntrada(char **argv);
    std::string tipoVehiculo();
    float cilindrada();
    float kilometraje();
    float combustible();

};


#endif //UNTITLED4_PARSER_H
