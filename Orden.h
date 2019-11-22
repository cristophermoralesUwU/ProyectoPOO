//
// Created by Stefano Penny Cabrejo on 10/25/19.
//

#ifndef PROYECTO_POO_ORDEN_H
#define PROYECTO_POO_ORDEN_H
#include "importaciones.h"

class orden_t {
private:
    palabra slot;
    palabra ubi_final;
    palabra ubi_inicial;

public:
    orden_t();
    orden_t(palabra slot, palabra ubi_final, palabra ubi_inicial);
    palabra get_slot();
    palabra get_ubi_inicial();
    palabra get_ubi_final();

};


#endif //PROYECTO_POO_ORDEN_H
