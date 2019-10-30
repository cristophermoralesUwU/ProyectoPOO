//
// Created by USER on 27/10/2019.
//

#ifndef TRABAJOS_ALMACEN_H
#define TRABAJOS_ALMACEN_H
#include "importaciones.h"
#include "slot.h"
#include "producto.h"
class Almacen_t {
private:
    numero filas;
    numero columnas;
    palabra nombre;

public:
    Almacen_t();
    Almacen_t(numero filas, numero columnas);
    Almacen_t(numero columnas);
    Almacen_t(numero filas,Almacen_t(columnas));
    Almacen_t(Almacen_t& Almacen);
    void crear_almacen(numero filas, numero columnas);
    void imprimir_almacen();
    numero get_filas();
    numero get_columnas();
};


#endif //TRABAJOS_ALMACEN_H
