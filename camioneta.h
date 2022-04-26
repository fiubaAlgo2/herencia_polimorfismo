//
// Created by carolina on 29/10/20.
//

#ifndef UNTITLED4_CAMIONETA_H
#define UNTITLED4_CAMIONETA_H

#include "vehiculo.h"

class Camioneta: public Vehiculo {
public:
    Camioneta(const float cilindrada, const float kilometraje, const float combustible);
    ~Camioneta(){};

    float valorMercado() const;
};

#endif //UNTITLED4_CAMIONETA_H
