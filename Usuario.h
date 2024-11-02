#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
#include <string>

class Usuario
{
public:
    Usuario(std::string name, float saldo, int number_user);
    Usuario();
    ~Usuario();

    std::string getName() const;
    void setName(std::string name);

    float getSaldo();
    void setSaldo(float saldo);

    int getNumberUser() const;
    void setNumberUser(int number_user);

    friend std::ostream& operator<<(std::ostream& salida,Usuario& user);
    friend std::istream& operator>>(std::istream& entrada,Usuario& user);

    Usuario operator+(float saldo);
    Usuario operator-(float saldo);

    void control_saldo(float saldo);

protected:
    std::string name;
    float saldo;
    int number_user;

private:
};

#endif // USUARIO_H
