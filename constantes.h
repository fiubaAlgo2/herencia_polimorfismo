//
// Created by carolina on 18/5/21.
//

#ifndef H_P_CONSTANTES_H
#define H_P_CONSTANTES_H

#include<string>

const float PRECIO_BASE_AUTO = 1000;
const float PRECIO_BASE_CAMIONETA = 1500;
const float PRECIO_BASE_CAMION = 2000;

const std::string AUTO = "auto";
const std::string CAMION = "camion";
const std::string CAMIONETA = "camioneta";

enum posicion {
    TIPO_VEHICULO = 1,
    CILINDRADA,
    KILOMETRAJE,
    COMBUSTIBLE
};

#endif //H_P_CONSTANTES_H