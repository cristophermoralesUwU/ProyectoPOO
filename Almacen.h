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
typedef vector<numero> row_t;
typedef vector<row_t> matriz_t;

class Almacen_t {
private:
    numero filas;
    numero columnas;
    palabra nombre;

public:
    Almacen_t();
    Almacen_t(numero filas, numero columnas);
    Almacen_t(Almacen_t& Almacen);
    numero get_filas();
    numero get_columnas();
    matriz_t generar_matriz(numero filas,numero columnas);
    void rellenar_matriz(matriz_t& m);
    void imprimir_matriz(matriz_t& m);

};



#endif //TRABAJOS_ALMACEN_H
