#include "Mainfunctions.h"
#include "Producto.h"
#include "Usuario.h"
#include "Shoplist.h"
#include <string>
#include <iostream>
using namespace std;
int intentos = 0;//variable global que guarda el numero de intentos al cual el usuario intento acceder pero fallo
float total = 0;//variable global que realiza acumulaciones de la suma de los precios de los productos para asi poder realizar las compras
int id_users = 0;//variable global que indica cuantas veces un usuario esta registrandose, ese sera su id
Shoplist capacidadMax(40); // vector que contiene la lista de productos que se deseen comprar
Usuario usuary; //definimos una instanciacion de usuario indefinida ya que este programa se encarga de definir esa instanciacion
//constructor
Mainfunctions::Mainfunctions()
{

}

//funcion del logo de la app de compras y control de tu dinero de la app
void Mainfunctions::logoshop()
{
    system("cls");
    cout<<"\t<=====================================shop-healt======================================>"<<endl;
    cout<<"\t\t-----------------------------"<<endl;
    cout<<"\t\t|                            |"<<endl;
    cout<<"\t\t|        O           O       |"<<endl;
    cout<<"\t\t|                            |"<<endl;
    cout<<"\t\t|    |                  |    |"<<endl;
    cout<<"\t\t|     ||||||||||||||||||     |"<<endl;
    cout<<"\t\t|                            |"<<endl;
    cout<<"\t\t-----------------------------"<<endl;

}
//funcion que muestra los productos disponibles en la app para asi el usuario decida si comprar algo o no
void Mainfunctions::productshop()
{
    Producto prod1("Jitomate",15.50,1),prod2("cebolla",12.50,2),prod3("Lechuga",17.50,3),prod4("Zanahoria",20.50,4),
    prod5("Papa",11.50,5),prod6("Brocoli",10.50,6),prod7("cilantro",4.50,7),prod8("Manzana",21.50,8),prod9("Pepino",19.50,9),prod10("Piña",25.50,10),
    prod11("Pimientos",13.50,11),prod12("Platanos",22.50,12),prod13("Naranja",27.50,13),
    prod14("Arandanos",9.50,14),prod15("Ciruelas",11.50,15),prod16("aguacate",65.50,16),prod17("Fresas",16.50,17),prod18("Toronjas",28.50,18),
    prod19("Jamon",30.50,19),prod20("Pan artesanal",23.50,20),prod21("Crema",30.50,21),prod22("Queso",20.50,22),prod23("salami",32.50,23),prod24("ajo",5.50,24),
    prod25("chorizo",21.50,25),prod26("mora azul",12.50,26),prod27("Nuez",12.50,27),prod28("Yogurt",29.50,28),prod29("Galletas oreo",16.50,29),prod30("Cereal",32.50,30),
    prod31("leche",22.50,31),prod32("Bolsa de cafe",42.50,32),prod33("Carne de pollo",31.50,33),prod34("carne de rez",45.50,34),prod35("Pescado",33.50,35),prod36("Queso",35.50,36),
    prod37("Tortillas",21.50,37),prod38("huevo",30.50,38),prod39("camarones",40.50,39),prod40("espinaca",23.50,40);

    int opc;
    system("cls");
    cout<<"Lista de productos diponibles:"<<endl;
    prod1.imprimirinfo();
    prod2.imprimirinfo();
    prod3.imprimirinfo();
    prod4.imprimirinfo();
    prod5.imprimirinfo();
    prod6.imprimirinfo();
    prod7.imprimirinfo();
    prod8.imprimirinfo();
    prod9.imprimirinfo();
    prod10.imprimirinfo();
    prod11.imprimirinfo();
    prod12.imprimirinfo();
    prod13.imprimirinfo();
    prod14.imprimirinfo();
    prod15.imprimirinfo();
    prod16.imprimirinfo();
    prod17.imprimirinfo();
    prod18.imprimirinfo();
    prod19.imprimirinfo();
    prod20.imprimirinfo();
    prod21.imprimirinfo();
    prod22.imprimirinfo();
    prod23.imprimirinfo();
    prod24.imprimirinfo();
    prod25.imprimirinfo();
    prod26.imprimirinfo();
    prod27.imprimirinfo();
    prod28.imprimirinfo();
    prod29.imprimirinfo();
    prod30.imprimirinfo();
    prod31.imprimirinfo();
    prod32.imprimirinfo();
    prod33.imprimirinfo();
    prod34.imprimirinfo();
    prod35.imprimirinfo();
    prod36.imprimirinfo();
    prod37.imprimirinfo();
    prod38.imprimirinfo();
    prod39.imprimirinfo();
    prod40.imprimirinfo();

    cout<<"Que desea hacer?\n1.añadir productos a mi lista de compras\n2.salir\n"<<endl;
    cin>>opc;
    if(opc == 1)
    {
        registro_productos(capacidadMax);
    }
    if(opc == 2)
    {
        menu_principal();
    }
    else
    {
        system("cls");
        cout<<"Ingresaste una opcion no valida para este programa, intenta de nuevo"<<endl;
    }

}
//funcion que realiza el retiro del dinero del usuario, en este caso supongamos que desea sacar efectivo
void Mainfunctions::retiro(Usuario& usuary)
{
    float cants;
    system("cls");
    cout<<"Ingresa el saldo que desea retirar a su cuenta"<<endl;
    cin>>cants;
    usuary - cants;
    Sleep(2000);
    cout<<"El retiro de la cantidad de "<<cants<<" pesos fue exitoso"<<endl;
    Sleep(2000);
    menu_principal();
}

//funcion en la que depositas dinero para asi poder incrementar el saldo de tu cuenta
void Mainfunctions::deposito(Usuario& usuary)
{
    float cant;
    system("cls");
    cout<<"Ingresa el saldo que desea depositar a su cuenta"<<endl;
    cin>>cant;
    usuary + cant;
    Sleep(2000);
    cout<<"El deposito de la cantidad de "<<cant<<" pesos fue exitoso"<<endl;
    Sleep(2000);
    menu_principal();
}
//funcion que determina si la lista de compras esta vacia o no
void Mainfunctions::list_shop()
{
    int op;
    std::string domicilio;
    if(capacidadMax.listaVacia())//un condicional que determina si la lista esta vacia, muestra este mensaje
    {
        system("cls");
        cout<<"La lista de compras esta vacia intenta agregar productos para poder realizar compras"<<endl;
        Sleep(4000);
    }
    //en el caso de ya haber agregado algun producto simplemente muestra la lista de esos productos que se agregaron previamente
    else
    {
       capacidadMax.mostrarlista();
       cout<<"La cantidad total a pagar es de: $"<<total<<" pesos"<<endl;
       cout<<"1.Pagar\n2.salir"<<endl;
       cin>>op;
       if(op == 1)
       {
            cout<<"Verificando saldo para pagar el monto total..."<<endl;
            Sleep(3000);
            pantallacarga();
            if(usuary.getSaldo()>total)
            {
                system("cls");
                cout<<"Muy bien ingrese su domicilio para poder llevar sus productos a comprar\n(un ejemplo seria: Rio mascota #1236, guadalajara jalisco)"<<endl;
                cin>>domicilio;
                pantallacarga();
                Usuario userbuys = usuary - total;
                cout<<"La compra fue relizada con exito"<<endl;
                Sleep(2000);
                fflush(stdin);
                menu_principal();
            }
            else
            {
                system("cls");
                cout<<"parace que no tiene el saldo suficiente para pagar los productos que selecciono\nfavor de depositar mas dinero para asi poder comprar exitosamente"<<endl;
                Sleep(3000);
                fflush(stdin);
                menu_principal();
            }
       }
       if(op == 2)
       {
            menu_principal();
       }
    }
}
//funcion de registro de los productos hacia la lista de compras
void Mainfunctions::registro_productos(Shoplist& lista)
{
    int num_products,is,id;
    float precio;
    std::string nombre;
    cout<<"Vamos a registrar un producto a tu lista de compras..."<<endl;
    cout<<"Cuantos productos desea agregar?: "<<endl;
    cin>>num_products;
    //un bucle que nos ayuda a guardar mas de 1 producto a la lista de compras
    for(is =1; is<= num_products; is++)
    {
        cout<<"Ingresa el nombre del producto: "<<endl;
        cin>> nombre;
        cout<<"Ingrese su precio: "<<endl;
        cin>>precio;
        cout<<"Ingrese el id del producto: "<<endl;
        cin>>id;
        cout<<"\n"<<endl;
        total+=precio;
        Producto* nuevoProducto = new Producto(nombre,precio,id); //instanciamos de la clase producto
        lista.agregarProducto(*nuevoProducto,id);//se agrega al vector
        delete nuevoProducto;//liberamos memoria de forma dinamica para asi evitar que nuestro programa colapse
    }
    //el bucle termina y despues de 2 segundos muestra un mensaje de registro de productos exitoso y despues de 3 segundos devuelve al menu principal
    Sleep(2000);
    system("cls");
    cout<<"Los productos han sido registrados exitosamente"<<endl;
    Sleep(3000);
    fflush(stdin);
    menu_principal();
}
//funcion para eliminar productos de la lista de compras por medio del ID
void Mainfunctions::eliminar_producto(Shoplist& lista)
{
    int id_eliminacion;
    cout<<"Ingresa el id del producto a eliminar"<<endl;
    cin>>id_eliminacion;
    lista.eliminarProducto(id_eliminacion);
    Sleep(2000);
    system("cls");
    cout<<"Producto eliminado exitosamente"<<endl;
    list_shop();
}
//funcion de simulador de pantalla de carga, esto para verse mas profecional jejeje aunque no lo es
void Mainfunctions::pantallacarga()
{
    int numbs = 4;
    //bucle que repite un mensaje de salida: cargando..., limpia la pantalla 4 veces
    for(int i =0; i<numbs; i++)
    {
        system("cls");
        cout<<"\tCargando..."<<endl;
        Sleep(1000);
        system("cls");

    }
}
//funcion de nuestro menu principal, accedemos a el una vez estemos registrados en el programa
void Mainfunctions::menu_principal()
{
   int opciones;
   try//un buen uso de try y catch para asi evitar errores fatales en el programa
   {
       do
        {
           system("cls");
           cout<<"<======================================BIENVENIDO======================================>"<<endl;
           cout<<"Shop-healt"<<endl;
           cout<<"1.Consultar informacion y saldo actual\n2.Depositar saldo\n3.Retirar saldo\n4.Consultar productos\n5.Mi lista de compras\n6.salir"<<endl;
           cin>>opciones;
           switch(opciones)
           {
           case 1://caso 1 consulta de la info de el usuario que esta registrado en el programa
               infouser(usuary);
               break;
           case 2://caso 2 llama la funcion de deposito
               deposito(usuary);
               break;
           case 3://caso 3 llama la funcion de retiro
               retiro(usuary);
               break;
           case 4://caso 4 funcion de la muestra de los productos existentes
               productshop();
               break;
           case 5://caso 5 funcion que muestra los productos agregados a nuestra lista de compras
               list_shop();
               break;
           case 6://caso 6 aqui es cuando el usuario decide salirse ya del porgrama y es cuando el bucle se rompe
               system("cls");
               cout<<"saliendo del programa..."<<endl;
               Sleep(3000);
               pantallacarga();
               break;
           default://en el caso de que lo que se pidio ingresar en estas opciones del menu muestra un mensaje para el usuario
               system("cls");
               cout<<"lo que ingresaste no es valido, intenta de nuevo"<<endl;
           }
           }while(opciones!=6);
   }
   catch(...)
   {
      cerr<<"Error,lo que ingresaste no es valido para este programa intenta de nuevo porfavor"<<endl;
   }
}
//funcion que nos muestra la informacion del usuario regitrado anteriormente
void Mainfunctions::infouser(Usuario& usuary)
{
    system("cls");
    cout<<usuary<<endl;
    usuary.control_saldo(usuary.getSaldo()); //llamada de la funcion miembro de la clase usuario que realiza una verificacion de saldo del usuario
    Sleep(8000);
}
//funcion que registra el usuario
void Mainfunctions::registro_usuario(Usuario& usuary)
{
    bool trus = true;
    while(trus)
    {
        id_users++;
        system("cls");
        cout<<"Su ID es el siguiente: "<<id_users<<endl;
        Sleep(2000);
        cout<<"en unos momentos usted podra registrarse"<<endl;
        Sleep(2000);
        pantallacarga();
        trus = false;
    }

    cin>>usuary;
    Sleep(2000);
    cout<<"Registro realizado exitosamente"<<endl;
    Sleep(2000);
}
//funcion de inicio de secion del usuario
void Mainfunctions::iniciosecion(Usuario& usuary)
{
    bool bucle = true;
    int options,id;
    std::string names;
    try
    {
        while(bucle)
        {
            system("cls");
            cout<<"Ingresa los datos que se requieren para poder acceder a la app"<<endl;
            cout<<"En caso de que aun no este registrado en este programa favor de regsitrarse\nasi poder disfrutar de las multiples opciones que esta app ofrece"<<endl;
            cout<<"1.Acceder al programa\n2.Registrarse"<<endl;
            cin>>options;
            if(options == 1)
            {
                system("cls");
                cout<<"Vamos a iniciar secion :D"<<endl;
                cout<<"Ingrese tu nombre de usuario"<<endl;
                cin>>names;
                cout<<"Ingrese el id que se le otorgo al momento que se registro"<<endl;
                cin>>id;
                if(names != usuary.getName()||id != usuary.getNumberUser())
                {
                    intentos++;
                    system("cls");
                    cout<<"El nombre de usuario o id que ingreso no coinciden, intente de nuevo con datos ya registrados\ntiene: "<<intentos<<"/3 disponibles para este programa, en caso de llegar a su limite el programa se cerrara"<<endl;
                    Sleep(7000);
                    if(intentos == 3)
                    {
                        system("cls");
                        bucle = false;
                        cout<<"Usted llego a su limite de intentos para acceder a este programa"<<endl;
                        Sleep(2000);
                        cout<<"Cerrando programa"<<endl;
                        Sleep(2000);
                        pantallacarga();
                    }

                }
                else
                {
                    system("cls");
                    cout<<"Bienvenido/a "<<usuary.getName()<<" en unos momentos ingresaras al programa..."<<endl;
                    Sleep(2000);
                    pantallacarga();
                    menu_principal();
                    return;
                }
            }
            if(options == 2)
            {
                registro_usuario(usuary);
            }
        }
    }
    catch(...)
    {
        cerr<<"Se produjo un error en el programa con la opcion no valida para este programa."<<endl;
    }
}
//funcion extra de relleno que presenta el programa
void Mainfunctions::presentacion()
{
    cout<<"Bienvenido a shop-health, la app en la que podras no solamente administrar tu dinero correctamente\ntambien comprar productos de nuestra app que seran llevados directo a tu casa"<<endl;
    cout<<"este programa lo unico que nececita es tu nombre\ncuando te registres se te proporcionara un id que sera unico para tu usuario en esta plataforma"<<endl;
    cout<<"preparate para una increible experiencia manejando tu saldo realizando:\ndepositos, retiros e incluso comprando nuestros productos que esta app ofrese solo para ti"<<endl;
    Sleep(12000);
    cout<<"sin mas que explicar comenzemos"<<endl;
    Sleep(3000);
    iniciosecion(usuary);
}
