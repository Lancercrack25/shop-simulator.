#include <iostream>
#include <Usuario.h>
#include <Producto.h>
#include <Shoplist.h>
#include <Mainfunctions.h>
#include <vector>
#include <windows.h>
#include <locale.h>
using namespace std;

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

int main()
{
    Mainfunctions applicacion;
    setlocale(LC_ALL,"spanish");//esta linea de codigo nos ayuda a configurar el idioma del programa que se este ejecutando
    applicacion.presentacion();
    return 0;
}
