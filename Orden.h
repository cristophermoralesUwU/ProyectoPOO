//
// Created by Stefano Penny Cabrejo on 10/25/19.
//

#ifndef PROYECTO_POO_ORDEN_H
#define PROYECTO_POO_ORDEN_H
#include "importaciones.h"
#include <vector>
#include "Robot.h"
#include "Almacen.h"
class orden_t {
private:
vector<robot_t*> robots;
vector<slot_t*> slots;
vector<producto_t*> productos;
public:
    void crear_almacen();
    void crear_robots();
    void mover_robot_y_AoQ_PC();
    void crear_productos();






};


#endif //PROYECTO_POO_ORDEN_H
