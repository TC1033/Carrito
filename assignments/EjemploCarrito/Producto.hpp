#ifndef PRODUCTO
#define PRODUCTO_H
#include <iostream>

class Producto{
  public:
    // constructores y destructor
    Producto();
    Producto(std::string, float);
    // getters
    std::string getNombre() const;
    float getPrecio() const;
    // setters
    void setNombre(std::string);
    void setPrecio(float);
    // metodo para imprimir los atributos del articulo
    void imprimirProducto();
private:
  std::string nombre;
  float precio;
};

#endif //PRODUCTO_H