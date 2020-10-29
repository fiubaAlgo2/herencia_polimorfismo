//
// Created by carolina on 29/10/20.
//

#include "auto.h"

Auto::Auto(int cilindrada, int kilometraje, int combustible):Vehiculo(cilindrada, kilometraje, combustible) {
    this->precio_base = 1000;
}

float Auto::valor_mercado() {
    return (this->coeficiente_impositivo() * this->precio_base * this->combustible) /
                            (1 + 0.001 * this->kilometraje);
}