//
// Created by carolina on 29/10/20.
//

#include "parser.h"
#include "camion.h"
#include "auto.h"
#include "camioneta.h"
#include<string>
#include<iostream>

using namespace std;

Parser::Parser(char** argv) {
    this->entrada = argv;
}

Vehiculo* Parser::procesarEntrada(char **argv){
    Vehiculo* vehiculo = NULL;
    Parser parser(argv);
    if(this->tipoVehiculo() == "camion"){
        vehiculo = new Camion(this->cilindrada(), this->kilometraje(), this->combustible());
    }
    else if (this->tipoVehiculo() == "auto"){
        vehiculo = new Auto(this->cilindrada(), this->kilometraje(), this->combustible());
    }
    else{
        vehiculo = new Camioneta(this->cilindrada(), this->kilometraje(), this->combustible());
    }
    return vehiculo;
}

std::string Parser::tipoVehiculo(){
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


