//
// Created by carolina on 29/10/20.
//

#include "parser.h"
#include "camion.h"
#include "auto.h"
#include "camioneta.h"
#include "constantes.h"

using namespace std;

Parser::Parser(char** argv) {
    this->entrada = argv;
}

Vehiculo* Parser::procesarEntrada() const {
    Vehiculo* vehiculo = NULL;
    if(this->tipoVehiculo() == CAMION) {
        vehiculo = new Camion(this->cilindrada(), this->kilometraje(), this->combustible());
    }
    else if (this->tipoVehiculo() == AUTO) {
        vehiculo = new Auto(this->cilindrada(), this->kilometraje(), this->combustible());
    }
    else if (this->tipoVehiculo() == CAMIONETA) {
        vehiculo = new Camioneta(this->cilindrada(), this->kilometraje(), this->combustible());
    }
    return vehiculo;
}

std::string Parser::tipoVehiculo() const {
    return this->entrada[posicion::TIPO_VEHICULO];
}

float Parser::cilindrada() const {
    return stof(this->entrada[posicion::CILINDRADA]);
}

float Parser::kilometraje() const {
    return stof(this->entrada[posicion::KILOMETRAJE]);
}

float Parser::combustible() const {
    return stof(this->entrada[posicion::COMBUSTIBLE]);
}


