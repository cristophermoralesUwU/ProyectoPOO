#include <iostream>
#include "Almacen.h"
#include "slot.h"
#include "producto.h"
#include "importaciones.h"
#include "Orden.h"
int main() {

    orden_t UO;
    UO.crear_almacen();
    UO.crear_robots();
    UO.mover_robot_y_AoQ_PC();


    return 0;
}


