//
// Created by USER on 27/10/2019.
//

#include "producto.h"

producto_t::~producto_t() {

}
producto_t::producto_t(){

}

void producto_t::setCodigo(palabra m_codigo) {
    codigo=m_codigo;

}

void producto_t::setNombre(palabra m_nombre) {
    nombre=m_nombre;

}
palabra producto_t::get_nombre(){
    return nombre;
}
palabra producto_t::get_codigo(){
    return codigo;
}



