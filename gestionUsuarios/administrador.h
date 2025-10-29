#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H
#include "usuario.h"
#include <vector>

class Administrador:public Usuario
{
public:
    int nivelDePermisos = 3;
    Administrador(std::string nombre, int id);
    void mostrarInfo() override;
    void bloquearUsuario(std::vector<Usuario*>usuarios ,std::string nombre);
};

#endif // ADMINISTRADOR_H
