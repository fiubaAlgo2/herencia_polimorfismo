//
// Created by carolina on 29/10/20.
//

#ifndef UNTITLED4_VEHICULO_H
#define UNTITLED4_VEHICULO_H

class Vehiculo{
public:
    Vehiculo(const float cilindrada, const float kilometraje, const float combustible);
    virtual ~Vehiculo(){};

    float coeficienteImpositivo() const;
    virtual float valorMercado() const = 0;

protected:
    float cilindrada;
    float kilometraje;
    float combustible;
    float precioBase;
};

#endif //UNTITLED4_VEHICULO_H
