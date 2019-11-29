//
// Created by Stefano Penny Cabrejo on 10/25/19.
//

#include "Orden.h"
void orden_t::crear_productos() {
    numero r=4;
    numero t=4;
    numero y=r*t;
    for (numero i=0;i<y;i++){
        producto_t* productito=new producto_t();
        productos.push_back(productito);
    }
}

void orden_t::crear_robots() {
    cout<<"--------ROBOTS--------\n";
    numero n=0;
    cout<<"Ingrese el numero de robots:\n";
    cin>>n;
    if (n<4){
        for(numero i=0;i<n;i++){
            int f;
            int c;
            cout<<"Dime la fila del robot:\n";
            cin>>f;
            cout<<"Dime la columna del robot:\n";
            cin>>c;
            robot_t* robo= new robot_t(f,c);
            robots.push_back(robo);
        }
    }
    if(n<1){
        cout<<"Numero de robots no puede ser cero";
    }
}

void orden_t::crear_almacen() {
    numero r=4;
    numero t=4;
    numero y=r*t;
    for (numero i=0;i<y;i++){
        slot_t* slotsito=new slot_t();
        slots.push_back(slotsito);
    }
}

void orden_t::mover_robot_y_AoQ_PC() {
    numero posx=0;
    numero posy=0;
    for(numero i=0;i<robots.size();i++){
        cout<<"ROBOT#"<<i<<endl;
        cout<<"Dime fila:"<<endl;
        cin>>posx;
        cout<<"Dime columna:";
        cin>>posy;
        robots[i]->mover(posx,posy);
        if(posx==1 && posy==1){
            numero n=0;
            palabra pro;
            palabra codi;
            cout<<"Dime el producto";
            cin>>pro;
            cout<<"Dime el codigo";
            cin>>codi;
            slots[0]->setProducto(productos[i]->setNombre(pro));
            slots[0]->setProducto(productos[i]->setCodigo(codi));
            cout<<"Dime la cantidad";
            cin>>n;
            slots[0]->setCantidad(n);
        }
        if(posx==1 && posy==2){
            numero n=0;
            palabra uwu;
            cout<<"Dime el producto";
            cin>>uwu;
            slots[1]->setProducto(productos[i]);
            cout<<"Dime la cantidad";
            cin>>n;
            slots[1]->setCantidad(n);
        }
        if(posx==1 && posy==3){
            numero n=0;
            palabra uwu;
            cout<<"Dime el producto";
            cin>>uwu;
            slots[2]->setProducto(productos[i]);
            cout<<"Dime la cantidad";
            cin>>n;
            slots[2]->setCantidad(n);
        }
        if(posx==1 && posy==4){
            numero n=0;
            palabra uwu;
            cout<<"Dime el producto";
            cin>>uwu;
            slots[3]->setProducto(productos[i]);
            cout<<"Dime la cantidad";
            cin>>n;
            slots[3]->setCantidad(n);
        }
        if(posx==2 && posy==1){
            numero n=0;
            palabra uwu;
            cout<<"Dime el producto";
            cin>>uwu;
            slots[4]->setProducto(productos[i]);
            cout<<"Dime la cantidad";
            cin>>n;
            slots[4]->setCantidad(n);
        }
        if(posx==2 && posy==2){
            numero n=0;
            palabra uwu;
            cout<<"Dime el producto";
            cin>>uwu;
            slots[5]->setProducto(productos[i]);
            cout<<"Dime la cantidad";
            cin>>n;
            slots[5]->setCantidad(n);
        }
        if(posx==2 && posy==3){
            numero n=0;
            palabra uwu;
            cout<<"Dime el producto";
            cin>>uwu;
            slots[6]->setProducto(productos[i]);
            cout<<"Dime la cantidad";
            cin>>n;
            slots[6]->setCantidad(n);
        }
        if(posx==2 && posy==4){
            numero n=0;
            palabra uwu;
            cout<<"Dime el producto";
            cin>>uwu;
            slots[7]->setProducto(productos[i]);
            cout<<"Dime la cantidad";
            cin>>n;
            slots[7]->setCantidad(n);
        }if(posx==3 && posy==1){
            numero n=0;
            palabra uwu;
            cout<<"Dime el producto";
            cin>>uwu;
            slots[8]->setProducto(productos[i]);
            cout<<"Dime la cantidad";
            cin>>n;
            slots[8]->setCantidad(n);
        }
        if(posx==3 && posy==2){
            numero n=0;
            palabra uwu;
            cout<<"Dime el producto";
            cin>>uwu;
            slots[9]->setProducto(productos[i]);
            cout<<"Dime la cantidad";
            cin>>n;
            slots[9]->setCantidad(n);
        }
        if(posx==3 && posy==3){
            numero n=0;
            palabra uwu;
            cout<<"Dime el producto";
            cin>>uwu;
            slots[10]->setProducto(productos[i]);
            cout<<"Dime la cantidad";
            cin>>n;
            slots[10]->setCantidad(n);
        }
        if(posx==3 && posy==4){
            numero n=0;
            palabra uwu;
            cout<<"Dime el producto";
            cin>>uwu;
            slots[11]->setProducto(productos[i]);
            cout<<"Dime la cantidad";
            cin>>n;
            slots[11]->setCantidad(n);
        }
        if(posx==4 && posy==1){
            numero n=0;
            palabra uwu;
            cout<<"Dime el producto";
            cin>>uwu;
            slots[12]->setProducto(productos[i]);
            cout<<"Dime la cantidad";
            cin>>n;
            slots[12]->setCantidad(n);
        }
        if(posx==4 && posy==2){
            numero n=0;
            palabra uwu;
            cout<<"Dime el producto";
            cin>>uwu;
            slots[13]->setProducto(productos[i]);
            cout<<"Dime la cantidad";
            cin>>n;
            slots[13]->setCantidad(n);
        }
        if(posx==4 && posy==3){
            numero n=0;
            palabra uwu;
            cout<<"Dime el producto";
            cin>>uwu;
            slots[14]->setProducto(productos[i]);
            cout<<"Dime la cantidad";
            cin>>n;
            slots[14]->setCantidad(n);
        }
        if(posx==4 && posy==4){
            numero n=0;
            palabra uwu;
            cout<<"Dime el producto";
            cin>>uwu;
            slots[15]->setProducto(productos[i]);
            cout<<"Dime la cantidad";
            cin>>n;
            slots[15]->setCantidad(n);
        }





    }
}






