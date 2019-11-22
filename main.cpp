#include <iostream>
#include "Almacen.h"
#include "slot.h"
#include "producto.h"
#include "importaciones.h"
int main() {

    Almacen_t unico_almacen(4, 4);
    auto m = unico_almacen.generar_matriz(4, 4);
    unico_almacen.rellenar_matriz(m);
    unico_almacen.imprimir_matriz(m);


    producto_t *pOsos = new producto_t();
    slot_t *p1 = new slot_t();
    pOsos->setNombre("Osos de Peluche");
    pOsos->setCodigo("A1Z521");
    p1->setCantidad(30);
    p1->setProducto(pOsos);
    // p1->imprimirDatos(cout);

    producto_t *calculadoras = new producto_t();
    slot_t *p2 = new slot_t();
    calculadoras->setNombre("calculadoras");
    calculadoras->setCodigo("D34R56");
    p2->setProducto(calculadoras);
    p2->setCantidad(40);
    // p2->imprimirDatos(cout);

    delete p1;
    delete pOsos;


    numero u=5;
    while(u!=0){
        cout<<"Menu\n";
        cout<<"1.Informacion de los slots\n";
        cout<<"2.Robot\n";
        cout<<"3.Crear un producto\n";
        cout<<"Dime el numero que deseas hacer:\n";
        cin>>u;
        if(u=1){
            p1->imprimirDatos(cout);
            p2->imprimirDatos(cout);
        }
        if(u=2){
            cout<<"2.1.Mover robot\n";
            cout<<"2.2.Posicion del robot\n";
        }
        if(u=3){

        }

    }

    return 0;
}
/*  producto_t p1("osos de peluche",0001);
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
       cout<<p4.get_codigo();  */

//Comentario

