#ifndef CARRITO_H
#define CARRITO_H
#include "Producto.h"

class Carrito{
    public:
        //constante estática de clase
        static const int MAX = 10;
        //Solo pondremos constructor por default para crear un carrito vacío
        Carrito();
        //Para acceder a un elemento de los arreglos
        Producto getProducto(int);
        int getCantidad(int);
        //Adicionales
        void agregaProducto(Producto&, int);
        float calculaTotal();
        void imprimeTicket();

    private:
        Producto productos[MAX];
        int cantidades[MAX];
        int cantProd;
};

#endif //CARRITO_H
