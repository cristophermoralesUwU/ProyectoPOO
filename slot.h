//
// Created by USER on 27/10/2019.
//

#ifndef TRABAJOS_SLOT_H
#define TRABAJOS_SLOT_H

#include <vector>
#include "importaciones.h"
#include "producto.h"

class slot_t{
private:
    numero cantidad;
    producto_t* m_producto;
public:
    slot_t();
    virtual ~slot_t();
    void setProducto(producto_t* pProducto);
    void setCantidad(numero m_cantidad);
    void imprimirDatos(ostream &os);
    numero get_cantidad();
};



#endif //TRABAJOS_SLOT_H
