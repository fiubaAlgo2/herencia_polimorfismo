#include <iostream>
#include <fstream>
#include "camioneta.h"
#include "camion.h"
#include "auto.h"
#include "parser.h"

using namespace std;

int main(int argc, char *argv[]) {

    if (argc == 5) {
        Parser parser = Parser(argv);
        Vehiculo* vehiculo = parser.procesarEntrada(argv);
        cout<< vehiculo->valorMercado()<<endl;
        cout<< vehiculo->coeficienteImpositivo()<<endl;
        delete vehiculo;
    }
    else {
        cout << "Ingrese los argumentos del programa, por ejemplo: ./programa camion 1 2 3" << endl;
    }
    
    return 0;
}
