//
// Created by carolina on 29/10/20.
//

#ifndef UNTITLED4_VEHICULO_H
#define UNTITLED4_VEHICULO_H

class Vehiculo{

public:
    float cilindrada;
    float kilometraje;
    float combustible;
    float precioBase;

public:
    Vehiculo(float cilindrada, float kilometraje, float combustible);
    virtual ~Vehiculo(){};

    float coeficienteImpositivo();

    virtual float valorMercado()=0;

    void crear(char** entrada);
};

#endif //UNTITLED4_VEHICULO_H
