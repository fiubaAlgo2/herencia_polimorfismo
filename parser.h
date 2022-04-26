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
    Parser(char **argv);
    ~Parser(){};
    Vehiculo* procesarEntrada() const;

private:
    char** entrada;

    std::string tipoVehiculo() const;
    float cilindrada() const;
    float kilometraje() const;
    float combustible() const;
};


#endif //UNTITLED4_PARSER_H
