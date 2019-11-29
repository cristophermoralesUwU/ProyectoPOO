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
    palabra codigo;
public:
    producto_t();
    virtual ~producto_t();
    void setCodigo(palabra m_codigo);
    void setNombre(palabra m_nombre);
    palabra get_nombre();
    palabra get_codigo();
};



#endif //TRABAJOS_PRODUCTO_H
