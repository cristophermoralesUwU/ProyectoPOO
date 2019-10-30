//
// Created by USER on 27/10/2019.
//

#include "producto.h"

producto_t::producto_t():
nombre(), codigo() {

}
producto_t::producto_t(palabra nombre, numero codigo):
nombre(nombre),codigo(codigo)
{

}
palabra producto_t::get_nombre(){
    return nombre;
}
numero producto_t::get_codigo(){
    return codigo;
}