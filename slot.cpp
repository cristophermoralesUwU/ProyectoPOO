//
// Created by USER on 27/10/2019.
//

#include "slot.h"

slot_t::slot_t()        {
}


numero slot_t::get_cantidad() {
    return cantidad;
}


void slot_t::setProducto(producto_t *pProducto) {
    m_producto=pProducto;

}

void slot_t::setCantidad(numero m_cantidad) {
    cantidad=m_cantidad;

}

slot_t::~slot_t() {

}

void slot_t::imprimirDatos(ostream &os) {

    cout<<"Informacion del Slot\n";
    cout<<"--------------------\n";
    cout<<"Cantidad: "<<cantidad<<endl;
    cout<<"Producto: "<<m_producto->get_nombre()<<endl;
    cout<<"Código: "<<m_producto->get_codigo()<<endl;
}



