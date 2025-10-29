#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include "usuario.h"


class Estudiante:public Usuario
{
public:
    int creditosAcumulados = 5;

    Estudiante(std::string tipo, std::string nombre, int id);

    void mostrarInfo() override;
    int getId() override;

    int matricularCurso();
};

#endif // ESTUDIANTE_H
