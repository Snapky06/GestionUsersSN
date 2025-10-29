#include "usuario.h"

Usuario::Usuario(std::string nombre, int id)
{
    this->nombre=nombre;
    this->id=id;
}

void mostrarInfo();

std::string Usuario::getNombre(){
    return this->nombre;
}
int Usuario::getId(){
    return this->id;
}

