//
// Created by carolina on 29/10/20.
//

#include "auto.h"
#include "constantes.h"

Auto::Auto(const float cilindrada, const float kilometraje, const float combustible)
            : Vehiculo(cilindrada, kilometraje, combustible) {
    this->precioBase = PRECIO_BASE_AUTO;
}

float Auto::valorMercado() const {
    return (this->coeficienteImpositivo() * this->precioBase * this->combustible) /
                            (1 + 0.001f * this->kilometraje);
}