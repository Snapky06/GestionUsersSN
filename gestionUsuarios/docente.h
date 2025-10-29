#ifndef DOCENTE_H
#define DOCENTE_H
#include "usuario.h"
#include <vector>

class Docente:public Usuario
{
public:
    int tareasCalificadas;
    Docente(std::string nombre, int id);
    void mostrarInfo() override;
    int calificarTarea(std::vector<Usuario*> usuarios , std::string nombre);

};

#endif // DOCENTE_H
