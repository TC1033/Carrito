#include "Carrito.h"

const int Carrito::MAX;

Carrito::Carrito(){
    cantProd = 0;
}

Producto Carrito::getProducto(int pos){
    if (pos>=0 && pos<cantProd){
        return productos[pos];
    }
    Producto p;
    return p;
}

int Carrito::getCantidad(int pos){
    //Completa este método
    return 0; // regresa 0 si pos no es válido
}

void Carrito::agregaProducto(Producto& p, int cuantos){
    if (cantProd < MAX){
        //Completa esta función
    }
}

float Carrito::calculaTotal(){
    float total=0;
    for(int i=0; i<cantProd; i++){
        //Completa este método
    }
    return total;
}
void Carrito::imprimeTicket(){
    std::cout << "----------- TICKET ----------------" << std::endl;
    for(int i=0; i<cantProd; i++){
        productos[i].imprimirProducto();
        std::cout <<  " | " << cantidades[i] << " | " << productos[i].getPrecio()*cantidades[i] << " | " << std::endl;
    }
    std::cout << "Total: $ " << calculaTotal() << std::endl;
    std::cout << "-----------------------------------" << std::endl;
}