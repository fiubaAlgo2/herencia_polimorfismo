//
// Created by carolina on 29/10/20.
//

#include "camioneta.h"

Camioneta::Camioneta(float cilindrada, float kilometraje, float combustible):Vehiculo(cilindrada, kilometraje, combustible) {
    this->precioBase = 1500;
}

float Camioneta::valorMercado() {
    return 3*(this->coeficienteImpositivo() * this->precioBase) /
        ((this->kilometraje + this->cilindrada) * 0.003f);
}