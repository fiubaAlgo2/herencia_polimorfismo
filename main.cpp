#include <iostream>

#include "director.h"
#include "parser.h"

int main(int argc, char* argv[]) {

    if(argc == 6) {
        Parser parser = Parser(argv);
        Empleado* empleado = parser.procesarEntrada();

        empleado->visualizarCaracteristicas();
        empleado->incrementarSalario();
        empleado->visualizarCaracteristicas();

        delete empleado;
    }

    else {
        std::cout << "Ingrese todos los argumentos del programa, por ejemplo: ./a.out 99177 Juan Perez 50000 10" << std::endl;
    }

    return 0;
}
