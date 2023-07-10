#include <fstream>
#include "Carrito.h"
using namespace std;

void llenaInventario(Producto prod[], int &cantidad){
    float precio;
    string nombre;
    cantidad=0;
    ifstream archivo;
    archivo.open("productos.txt");
    while(archivo >> nombre >> precio){ 
        //Qué hacemos con los datos leidos
    }
    archivo.close();
}

void imprimeInventario(Producto prod[], int cantidad){
    //Completa la función, debe imprimir todos los productos del arreglo
}
int main(){
    const int MAX = 10;
    int cantProductos;
    Carrito miCarrito;
    Producto inventario[MAX];
    llenaInventario(inventario, cantProductos);
    imprimeInventario(inventario, cantProductos);
    miCarrito.agregaProducto(inventario[2],2);
    miCarrito.agregaProducto(inventario[4],1);
    miCarrito.imprimeTicket();
}