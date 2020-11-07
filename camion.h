//
// Created by carolina on 29/10/20.
//

#ifndef UNTITLED4_CAMION_H
#define UNTITLED4_CAMION_H

#include "vehiculo.h"

class Camion: public Vehiculo {
public:
    Camion(int cilindrada, int kilometraje, int combustible);
    ~Camion();

    float valorMercado();
};


#endif //UNTITLED4_CAMION_H
