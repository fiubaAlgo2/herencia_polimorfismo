//
// Created by carolina on 29/10/20.
//

#ifndef UNTITLED4_AUTO_H
#define UNTITLED4_AUTO_H

#include "vehiculo.h"

class Auto: public Vehiculo {
public:
    Auto(const float cilindrada, const float kilometraje, const float combustible);
    ~Auto(){};

    float valorMercado() const;
};

#endif //UNTITLED4_AUTO_H
