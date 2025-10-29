#ifndef DOCENTE_H
#define DOCENTE_H
#include "estudiante.h"
#include "usuario.h"
#include <vector>

class Docente:public Usuario
{
private:
    int tareasCalificadas = 0;
public:
    Docente(std::string nombre, int id);
    void mostrarInfo() override;
    void calificarTarea(std::vector<Usuario*> usuarios , std::string nombre);

};

#endif // DOCENTE_H
