#ifndef USUARIO_H
#define USUARIO_H
#include <string>
class Usuario
{
private:
    std::string nombre;
    int id=0;
public:
    std::string tipo;
    bool bloqueado = false;
    Usuario(std::string nombre, int id);
    std::string getNombre();
    int getId();
protected:
    virtual void mostrarInfo();

};

#endif // USUARIO_H
