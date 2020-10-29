//
// Created by carolina on 29/10/20.
//

#include "vehiculo.h"
#include "auto.h"
#include <map>
#include <string>

Vehiculo::Vehiculo(int cilindrada, int kilometraje, int combustible){
    this->cilindrada = cilindrada;
    this->kilometraje = kilometraje;
    this->combustible = combustible;
}

float Vehiculo::coeficiente_impositivo() {
    return this->precio_base * this->cilindrada / 1000000;
}
