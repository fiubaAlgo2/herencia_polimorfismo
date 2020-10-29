//
// Created by carolina on 29/10/20.
//

#include "auto.h"

Auto::Auto(int cilindrada, int kilometraje, int combustible):Vehiculo(cilindrada, kilometraje, combustible) {
    this->precioBase = 1000;
}

float Auto::valorMercado() {
    return (this->coeficienteImpositivo() * this->precioBase * this->combustible) /
                            (1 + 0.001 * this->kilometraje);
}