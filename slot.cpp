//
// Created by USER on 27/10/2019.
//

#include "slot.h"

slot_t::slot_t():
cantidad(), nombre(), codigo(){
}

slot_t::slot_t(numero cantidad, producto_t nombre, producto_t codigo):
cantidad(cantidad),nombre(nombre),codigo(codigo)
{


}

numero slot_t::get_cantidad() {
    return cantidad;
}

producto_t slot_t::get_nombre() {
    return nombre;
}

producto_t slot_t::get_codigo() {
    return codigo;
}


