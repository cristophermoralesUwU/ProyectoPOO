//
// Created by Stefano Penny Cabrejo on 10/25/19.
//

#ifndef PROYECTO_POO_ROBOT_H
#define PROYECTO_POO_ROBOT_H
#include "importaciones.h"
#include <vector>
class robot_t {
private:
    numero fila_inicial;
    numero columna_inicial;
    numero fila;
    numero columna;

public:
    robot_t();
    robot_t(numero finicial, numero cinicial);
    void mover(numero posx, numero posy);



};


#endif //PROYECTO_POO_ROBOT_H
