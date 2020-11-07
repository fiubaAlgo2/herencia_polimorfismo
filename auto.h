//
// Created by carolina on 29/10/20.
//

#ifndef UNTITLED4_AUTO_H
#define UNTITLED4_AUTO_H

#include "vehiculo.h"

class Auto: public Vehiculo {
public:
    Auto(int cilindrada, int kilometraje, int combustible);
    ~Auto(){};

    float valorMercado();
};


#endif //UNTITLED4_AUTO_H
