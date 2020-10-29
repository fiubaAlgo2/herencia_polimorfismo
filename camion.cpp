//
// Created by carolina on 29/10/20.
//

#include "camion.h"

Camion::Camion(int cilindrada, int kilometraje, int combustible):Vehiculo(cilindrada, kilometraje, combustible) {
    this->precio_base = 1500;
}

float Camion::valor_mercado() {
    return (this->coeficiente_impositivo() * this->precio_base) /
            ((this->kilometraje + this->cilindrada + this->combustible) * 0.002);
}