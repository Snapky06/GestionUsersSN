#ifndef DOCENTE_H
#define DOCENTE_H
#include "estudiante.h"
#include "usuario.h"

class Docente:public Usuario
{
public:
    int tareasCalificadas;

    Docente(std::string tipo, std::string nombre, int id);

     void mostrarInfo() override;
     int getId() override;

     void calificarTarea(Estudiante* estudiante);
};

#endif // DOCENTE_H
