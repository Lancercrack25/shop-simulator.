#include "Producto.h"
#include <iostream>
using namespace std;

Producto::Producto(std::string nombre, float precio, int id_producto)
{
    this->nombre = nombre;
    this->precio = precio;
    this->id_producto = id_producto;
}

Producto::~Producto()
{

}

std::string Producto::getNombre()
{
    return nombre;
}

void Producto::setNombre(std::string name)
{
    this->nombre = nombre;
}

float Producto::getPrecio()
{
    return precio;
}

void Producto::setPrecio(float precio)
{
    this->precio = precio;
}

int Producto::getID() const
{
    return id_producto;
}

void Producto::setID(int id_producto)
{
    this->id_producto = id_producto;
}

Producto Producto::operator*(const Producto& otherPrecio)
{
  float nuevoprecio = precio * otherPrecio.precio;
  return Producto(nombre,nuevoprecio,id_producto);
}

void Producto::imprimirinfo() const
{
     cout<<"<=============================>"<<endl;
    cout<<"\tNombre: "<< nombre<<endl;
    cout<<"\tPrecio: "<< precio<<endl;
    cout<<"\tID: "<<id_producto<<endl;
    cout<<"<=============================>"<<endl;
}

