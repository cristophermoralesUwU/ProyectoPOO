//
// Created by USER on 27/10/2019.
//

#ifndef TRABAJOS_PRODUCTO_H
#define TRABAJOS_PRODUCTO_H
#include "importaciones.h"
using namespace std;
#include <string>
class producto_t {
private:
    palabra nombre;
    numero codigo;
public:
    producto_t();
    producto_t(palabra nombre, numero codigo);
    producto_t(producto_t& producto);
    palabra get_nombre();
    numero get_codigo();
};



#endif //TRABAJOS_PRODUCTO_H
