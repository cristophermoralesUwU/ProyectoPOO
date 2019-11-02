#include <iostream>
#include "Almacen.h"
#include "slot.h"
#include "producto.h"
int main() {
    Almacen_t unico_almacen(4,4);
    auto m= unico_almacen.generar_matriz(4,4);
    unico_almacen.rellenar_matriz(m);
    unico_almacen.imprimir_matriz(m);
    producto_t p1("osos de peluche",0001);
    producto_t p2("velas",0002);
    producto_t p3("mascaras de halloween",0003);
    producto_t p4("calabazas",0004);
    producto_t p5("sangre falsa",0005);
    cout<<p1.get_nombre()<<endl;
    cout<<p2.get_nombre()<<endl;
    cout<<p3.get_nombre()<<endl;
    cout<<p4.get_nombre()<<endl;
    cout<<p1.get_codigo()<<endl;
    cout<<p2.get_codigo()<<endl;
    cout<<p3.get_codigo()<<endl;
    cout<<p4.get_codigo();




//Comentario
    return 0;
}
