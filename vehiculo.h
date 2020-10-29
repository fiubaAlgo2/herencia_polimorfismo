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
    float precioBase;

public:
    Vehiculo(int cilindrada, int kilometraje, int combustible);

    float coeficienteImpositivo();

    virtual float valorMercado()=0;

    void crear(char** entrada);
};

#endif //UNTITLED4_VEHICULO_H
