//
// Created by carolina on 29/10/20.
//

#ifndef UNTITLED4_VEHICULO_H
#define UNTITLED4_VEHICULO_H

class Vehiculo{

public:
    float cilindrada;
    int kilometraje;
    float combustible;
    float precio_base;

public:
    Vehiculo(int cilindrada, int kilometraje, int combustible);

    float coeficiente_impositivo();

    virtual float valor_mercado()=0;

    void crear(char** entrada);
};

#endif //UNTITLED4_VEHICULO_H
