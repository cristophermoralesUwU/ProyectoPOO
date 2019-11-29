//
// Created by USER on 27/10/2019.
//

#ifndef UWU_ALMACEN_H
#define UWU_ALMACEN_H
#include "importaciones.h"
#include "slot.h"
#include "producto.h"
#include <vector>
#include <iomanip>

class Almacen_t {
private:
    numero filas=4;
    numero columnas=4;
    palabra nombre;
    vector<slot_t*> slots;

public:
    Almacen_t();
    Almacen_t(numero filas, numero columnas);
    Almacen_t(Almacen_t& Almacen);
    numero get_filas();
    numero get_columnas();



};



#endif //TRABAJOS_ALMACEN_H
