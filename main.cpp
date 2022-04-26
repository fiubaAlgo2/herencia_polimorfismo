#include <iostream>
#include "parser.h"

using namespace std;

int main(int argc, char *argv[]) {

    if (argc == 5) {
        Parser parser = Parser(argv);
        Vehiculo* vehiculo = parser.procesarEntrada();
        if (vehiculo != nullptr) {
            cout<< vehiculo->valorMercado()<<endl;
            cout<< vehiculo->coeficienteImpositivo()<<endl;
            delete vehiculo;
        }
    }
    else {
        cout << "Ingrese los argumentos del programa, por ejemplo: ./programa camion 10 20 30" << endl;
    }
    
    return 0;
}
