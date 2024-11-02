#include "Shoplist.h"
#include "Producto.h"
#include <iostream>
using namespace std;
//funcion que  verifica y evita que el producto se repita en la lista de compras por medio del ID
void Shoplist::agregarProducto(const Producto& producto,int id_producto)
{
    for (const auto& p : productos) {
        if (producto.getID() == p.getID()) {
            cout << "Este producto ya fue agregado a la lista de compras, intente agregar otro que no tenga" << endl;
            return;
        }
    }
    //en el caso de que el id no coincida con los registrado en la lista entonces se agregara
    productos.push_back(producto);
    cout << "El producto ha sido agregado exitosamente a la lista de compras" << endl;
}
//funcion que realiza eliminacion de el producto que se desee de nuestra lista de compras
void Shoplist::eliminarProducto(int id_producto)
{
    bool founds = false;
    if(!founds) {
        cerr << "El producto que usted desea eliminar no ha sido encontrado en la lista de compras." <<endl;
    }
    else
    {
        for (auto it = productos.begin(); it != productos.end(); ++it)
        {
            if (id_producto == it->getID())
             {
                productos.erase(it);
                cout << "El producto se ha removido de la lista de compras." <<endl;
                founds = true;
                break;
            }
        }
    }
}
//funcion boleana que verifica si nuestra lista de compras esta llena o vacia
bool Shoplist::listaVacia()
{
    return productos.empty();
}
//funcion que muestra los productos agregados en nuestra lista de compras
void Shoplist::mostrarlista()
{
    system("cls");
    std::cout << "\tMi lista de compras:" << std::endl;
    for (const auto& producto : productos) {
        producto.imprimirinfo();
        std::cout << "\n" << std::endl;
    }
}
