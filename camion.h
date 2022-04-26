//
// Created by carolina on 29/10/20.
//

#ifndef UNTITLED4_CAMION_H
#define UNTITLED4_CAMION_H

#include "vehiculo.h"

class Camion: public Vehiculo {
public:
    Camion(const float cilindrada, const float kilometraje, const float combustible);
    ~Camion(){};

    float valorMercado() const;
};


#endif //UNTITLED4_CAMION_H
