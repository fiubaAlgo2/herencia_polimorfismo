#include <iostream>

#include "director.h"
#include "parser.h"

int main(int argc, char* argv[]) {
    Parser parser = Parser(argv);
    Empleado* empleado = parser.procesarEntrada();

   empleado->visualizarCaracteristicas();
   empleado->incrementarSalario();
   empleado->visualizarCaracteristicas();

   delete empleado;


   return 0;
}
