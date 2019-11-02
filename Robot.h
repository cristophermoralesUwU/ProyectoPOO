//
// Created by Stefano Penny Cabrejo on 10/25/19.
//

#ifndef PROYECTO_POO_ROBOT_H
#define PROYECTO_POO_ROBOT_H
#include "importaciones.h"

class robot_t {
private:
    palabra nombre;
    palabra ubi_final;


public:
    robot_t();
    robot_t(palabra nombre,palabra ubi_inicial);
    palabra get_nombre();
    palabra get_ubi_inicial();


};


#endif //PROYECTO_POO_ROBOT_H
