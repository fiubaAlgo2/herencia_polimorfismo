//
// Created by carolina on 20/5/21.
//

#include "parser.h"
#include "map"
#include "administrativo.h"
#include "director.h"
#include "jefeDeArea.h"
#include<iostream>
#include<ctime>

using namespace std;

enum Argv{ LEGAJO = 1, NOMBRE, APELLIDO, SALARIO, ANTIGUEDAD};

Parser::Parser(char **argv) {
    this->entrada = argv;
}

Empleado* Parser::procesarEntrada()
{
    srand((unsigned) time(0));
    int numeroAleatorio = rand() % (101);

    cout << "Numero aleatorio: " << numeroAleatorio << endl;

    std::map<std::pair<int, int>, Empleado*> dic;
    dic[{0,69}] = new Administrativo(this->legajo(), this->nombre(), this->apellido(), this->salario(), this->antiguedad());
    dic[{70,89}] = new JefeDeArea(this->legajo(), this->nombre(), this->apellido(), this->salario(), this->antiguedad());
    dic[{90,100}] = new Director(this->legajo(), this->nombre(), this->apellido(), this->salario(), this->antiguedad());

    for (auto itr = dic.begin(); itr != dic.end(); itr++)
    {
        if(numeroAleatorio >= itr->first.first && numeroAleatorio <= itr->first.second)
        {
            return itr->second;
        }
    }
   /* if(numeroAleatorio >= 0 && numeroAleatorio <= 69)
    {
        cout << "administrativo"<<endl;
        return new Administrativo(this->legajo(), this->nombre(), this->apellido(), this->salario(), this->antiguedad());
    }
    else if (numeroAleatorio >= 70 && numeroAleatorio <= 89)
    {
        cout << "jefe de area"<<endl;
        return new JefeDeArea(this->legajo(), this->nombre(), this->apellido(), this->salario(), this->antiguedad());
    }
    else
    {
        cout << "director"<<endl;
        return new Director(this->legajo(), this->nombre(), this->apellido(), this->salario(), this->antiguedad());
    }*/

}

uint64_t Parser::legajo() {
    return atoi(this->entrada[LEGAJO]);
}

std::string Parser::nombre() {
    return this->entrada[NOMBRE];
}

std::string Parser::apellido() {
    return this->entrada[APELLIDO];
}

uint64_t Parser::salario()
{
    return atoi(this->entrada[SALARIO]);
}

uint64_t Parser::antiguedad()
{
    return atoi(this->entrada[ANTIGUEDAD]);
}


