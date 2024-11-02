#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>
#include <string>

class Producto
{
    public:
        Producto(std::string nombre, float precio, int id_producto);
        ~Producto();

        std::string getNombre();
        void setNombre(std::string nombre);

        float getPrecio();
        void setPrecio(float precio);

        int getID() const;
        void setID(int id_producto);

        void imprimirinfo() const;
        Producto operator *(const Producto& otherPrecio);

    protected:
        std::string nombre;
        float precio;
        int id_producto;

    private:
};

#endif // PRODUCTO_H
