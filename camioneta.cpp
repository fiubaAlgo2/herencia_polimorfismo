//
// Created by carolina on 29/10/20.
//

#include "camioneta.h"

Camioneta::Camioneta(int cilindrada, int kilometraje, int combustible):Vehiculo(cilindrada, kilometraje, combustible) {
    this->precio_base = 1500;
}

float Camioneta::valor_mercado() {
    return 3*(this->coeficiente_impositivo() * this->precio_base) /
        ((this->kilometraje + this->cilindrada) * 0.003);
}