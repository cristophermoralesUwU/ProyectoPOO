//
// Created by Stefano Penny Cabrejo on 10/25/19.
//

#include "Robot.h"
robot_t::robot_t() {

}



robot_t::robot_t(int finicial, int cinicial):fila_inicial(finicial),columna_inicial(cinicial)
 {

}

void robot_t::mover(numero posx, numero posy) {
    columna=posx;
    fila=posy;

}




