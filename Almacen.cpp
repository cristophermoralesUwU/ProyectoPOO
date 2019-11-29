//
// Created by utec on 22/11/19.
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


