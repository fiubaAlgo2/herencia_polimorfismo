//
// Created by carolina on 29/10/20.
//

#ifndef UNTITLED4_CAMIONETA_H
#define UNTITLED4_CAMIONETA_H

#include "vehiculo.h"

class Camioneta: public Vehiculo {
public:
    Camioneta(int cilindrada, int kilometraje, int combustible);

    float valorMercado();

};

#endif //UNTITLED4_CAMIONETA_H
