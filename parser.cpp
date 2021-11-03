//
// Created by carolina on 29/10/20.
//

#include "parser.h"
#include "camion.h"
#include "auto.h"
#include "camioneta.h"
#include<string>
#include<iostream>
#include <map>

using namespace std;

Parser::Parser(char** argv) {
    this->entrada = argv;
}

Vehiculo* Parser::procesarEntrada(char **argv){
    std::map<string, Vehiculo*>  map;
    map["auto"] = new Auto(this->cilindrada(),this->kilometraje(),this->combustible());
    map["camion"] = new Auto(this->cilindrada(),this->kilometraje(),this->combustible());
    map["camioneta"] = new Camioneta(this->cilindrada(),this->kilometraje(),this->combustible());

    Vehiculo* vehiculo = map[this->tipoVehiculo()];
    map[this->tipoVehiculo()] = NULL;

    for(auto i = map.begin(); i != map.end(); ++i) // Frees the created objects at the map
    {
        delete map[i->first];
    }

    return vehiculo;
/*
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
    return vehiculo;*/
}

std::string Parser::tipoVehiculo(){
    return this->entrada[1];
}

float Parser::cilindrada(){
    return stof(this->entrada[2]);
}

float Parser::kilometraje(){
    return stof(this->entrada[3]);
}

float Parser::combustible(){
    return stof(this->entrada[4]);
}


