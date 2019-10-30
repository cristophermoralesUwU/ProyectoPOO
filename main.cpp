#include <iostream>
#include "almacen.h"
#include "slot.h"
#include "producto.h"
int main() {
    producto_t p1("osos de peluche",0001);
    producto_t p2("velas",0002);
    producto_t p3("mascaras de halloween",0003);
    producto_t p4("calabazas",0004);
    producto_t p5("sangre falsa",0005);
    producto_t p6("ron",0006);
    producto_t p7("vodka",0007);
    cout<<p1.get_nombre()<<endl;
    cout<<p2.get_nombre()<<endl;
    cout<<p3.get_nombre()<<endl;
    cout<<p4.get_nombre()<<endl;
    cout<<p1.get_codigo()<<endl;
    cout<<p2.get_codigo()<<endl;
    cout<<p3.get_codigo()<<endl;
    cout<<p4.get_codigo();




    return 0;
}
