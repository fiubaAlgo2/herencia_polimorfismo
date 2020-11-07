#include <iostream>
#include <fstream>
#include "camioneta.h"
#include "camion.h"
#include "auto.h"
#include "parser.h"

using namespace std;

int main(int argc, char *argv[]) {

    Parser parser = Parser(argv);
    Vehiculo* vehiculo = parser.procesarEntrada(argv);
    cout<< vehiculo->valorMercado()<<endl;
    cout<< vehiculo->coeficienteImpositivo()<<endl;
    delete vehiculo;

    /*Camion camion = Camion(23,45,40);
    cout << camion.valor_mercado();*/
    return 0;
}
