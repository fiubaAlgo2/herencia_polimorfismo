//
// Created by carolina on 29/10/20.
//

#include "parser.h"
#include "camion.h"
#include<string>
#include<iostream>

using namespace std;

Parser::Parser(char** argv) {
    this->entrada = argv;
}

Vehiculo* Parser::procesar_entrada(char **argv){
    Vehiculo* vehiculo = NULL;
    Parser parser(argv);
    if(this->tipo_vehiculo() == "camion"){
        vehiculo = new Camion(this->cilindrada(), this->kilometraje(), this->combustible());
    }
    return vehiculo;
}

std::string Parser::tipo_vehiculo(){
    return this->entrada[1];
}

float Parser::cilindrada(){
    return atof(this->entrada[2]);
}

int Parser::kilometraje(){
    return atof(this->entrada[3]);
}

float Parser::combustible(){
    return atof(this->entrada[4]);
}
