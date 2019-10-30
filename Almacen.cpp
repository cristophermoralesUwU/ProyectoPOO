//
// Created by USER on 27/10/2019.
//

#include "Almacen.h"
#include "importaciones.h"

Almacen_t::Almacen_t():
filas(), columnas(){

}

Almacen_t::Almacen_t(numero filas, numero columnas):
filas(filas),columnas(columnas){

}

Almacen_t::Almacen_t(Almacen_t &Almacen) {

}

numero Almacen_t::get_filas() {
    return filas;
}

numero Almacen_t::get_columnas() {
    return columnas;
}

Almacen_t::Almacen_t(numero columnas) {

}

Almacen_t::Almacen_t(numero filas, Almacen_t columnas) {

}

void Almacen_t::crear_almacen(numero filas, numero columnas) {

}

void Almacen_t::imprimir_almacen() {

}


