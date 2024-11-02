#ifndef MAINFUNCTIONS_H
#define MAINFUNCTIONS_H
#include "Producto.h"
#include "Usuario.h"
#include "Shoplist.h"
#include <iostream>
#include <windows.h>
#include <vector>
class Mainfunctions
{
    public:
        Mainfunctions();
        void logoshop();
        void productshop();
        void retiro(Usuario& usuary);
        void deposito(Usuario& usuary);
        void list_shop();
        void registro_productos(Shoplist& lista);
        void pantallacarga();
        void menu_principal();
        void eliminar_producto(Shoplist& lista);
        void infouser(Usuario& usuary);
        void registro_usuario(Usuario& usuary);
        void iniciosecion(Usuario& usuary);
        void presentacion();
    protected:

    private:
};

#endif // MAINFUNCTIONS_H
