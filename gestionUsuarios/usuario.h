#ifndef USUARIO_H
#define USUARIO_H
#include <string>
class Usuario
{
public:
    std::string nombre;
    int id;
    Usuario(std::string tipo, std::string nombre, int id);

protected:
    std::string tipo;


    virtual void mostrarInfo();
    virtual int getId();
};

#endif // USUARIO_H
