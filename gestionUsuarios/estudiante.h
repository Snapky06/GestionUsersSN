#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include "usuario.h"


class Estudiante:public Usuario
{
public:
    int creditosAcumulados;
    bool calificado;
    Estudiante(std::string nombre, int id);
    void mostrarInfo() override;
    int matricularCurso(int creditosAcumulados);
};

#endif // ESTUDIANTE_H
