//
// Created by carolina on 29/10/20.
//

#include "vehiculo.h"
#include "auto.h"
#include <map>
#include <string>

Vehiculo::Vehiculo(const float cilindrada, const float kilometraje, const float combustible) {
    this->cilindrada = cilindrada;
    this->kilometraje = kilometraje;
    this->combustible = combustible;
}

float Vehiculo::coeficienteImpositivo() const {
    return this->precioBase * this->cilindrada / 1000000;
}
