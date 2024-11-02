#ifndef SHOPLIST_H
#define SHOPLIST_H
#include <vector>
#include <iostream>
#include "Producto.h"

class Shoplist
{
    public:
        Shoplist(int capacidadMax){}
        void agregarProducto(const Producto& producto,int id_producto);
        void eliminarProducto(int id_producto);
        bool listaVacia();
        void mostrarlista();
    protected:
        std::vector<Producto> productos;
        int capacidadMax;
    private:
};

#endif // SHOPLIST_H
