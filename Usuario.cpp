#include "Usuario.h"
#include <iostream>
using namespace std;
Usuario::Usuario(std::string name, float saldo, int number_user)
{
    this-> name = name;
    this-> saldo = saldo;
    this-> number_user = number_user;
}
Usuario::Usuario()
{

}

Usuario::~Usuario()
{

}

std::string Usuario::getName() const
{
    return name;
}

void Usuario::setName(std::string name)
{
    this-> name = name;
}

float Usuario::getSaldo()
{
    return saldo;
}

void Usuario::setSaldo(float saldo)
{
    this-> saldo = saldo;
}

int Usuario::getNumberUser() const
{
    return number_user;
}

void Usuario::setNumberUser(int number_user)
{
    this->number_user = number_user;
}

Usuario Usuario::operator+(float saldo)
{
     return Usuario(name, this->saldo += saldo, number_user);
     return *this;
}

Usuario Usuario::operator-(float saldo)
{
    return Usuario(name, this->saldo -= saldo, number_user);
    return *this;
}

void Usuario::control_saldo(float saldo)
{
    if(saldo == 0)
    {
        cout<<"El saldo de tu cuenta esta agotado o no ha depositado dinero a su cuenta"<<endl;
    }
    if(saldo <0)
    {
        cout<<"vaya vaya parece que estas en deuda con el banco, debes dinero y es mejor pagar tu deuda para evitar inconvenientes"<<endl;
    }
}

std::ostream& operator<<(std::ostream& salida,Usuario& user)
{
    salida<<user.name<<endl;
    salida<<"Su numero de usuario es: "<<user.number_user<<endl;
    salida<<"Su saldo actual es de: "<<user.saldo<<endl;
    return salida;
}

std::istream& operator>>(std::istream& entrada,Usuario& users)
{
    std::cout << "Ingrese el nombre del usuario: ";
    entrada >>users.name ;
    std::cout << "Ingrese el número de usuario que se le asigno anteriormente: ";
    entrada >> users.number_user;
    return entrada;
}
