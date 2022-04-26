//
// Created by carolina on 29/10/20.
//

#include "camion.h"
#include "constantes.h"

Camion::Camion(float cilindrada, float kilometraje, float combustible):Vehiculo(cilindrada, kilometraje, combustible) {
    this->precioBase = PRECIO_BASE_CAMION;
}

float Camion::valorMercado() {
    return (this->coeficienteImpositivo() * this->precioBase) /
            ((this->kilometraje + this->cilindrada + this->combustible) * 0.002f);
}