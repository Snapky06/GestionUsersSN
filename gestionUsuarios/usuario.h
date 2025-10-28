#ifndef USUARIO_H
#define USUARIO_H
#include <string>
class Usuario
{
public:
    Usuario(std::string tipo, std::string nombre, int id);

protected:
    virtual void mostrarInfo();
    virtual int validId();
};

#endif // USUARIO_H
