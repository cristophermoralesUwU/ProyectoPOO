//
// Created by USER on 27/10/2019.
//

#ifndef TRABAJOS_SLOT_H
#define TRABAJOS_SLOT_H
#include "importaciones.h"
#include "producto.h"


class slot_t {
private:
    numero cantidad;
    producto_t nombre;
    producto_t codigo;
public:
    slot_t();
    slot_t(numero cantidad, producto_t nombre, producto_t codigo);
    numero get_cantidad();
    producto_t get_nombre();
    producto_t get_codigo();
};



#endif //TRABAJOS_SLOT_H
