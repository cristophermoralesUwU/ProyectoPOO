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

matriz_t Almacen_t::generar_matriz(numero filas, numero columnas) {
    return matriz_t(filas,row_t(columnas));
}

void Almacen_t::rellenar_matriz(matriz_t &m) {
    numero i=0;
    for(auto& row: m) {
        for (auto &item:row) {
            item=++i;
        }
    }
}

void Almacen_t::imprimir_matriz(matriz_t &m) {
    for (auto &row: m) {
        for (auto &item: row)
            cout << setw(4) << item;
        cout << endl;

    }

}
