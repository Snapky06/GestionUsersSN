#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include "usuario.h"


class Estudiante:public Usuario
{
private:
int creditosAcumulados = 5;
public:
    bool calificado = false;
    Estudiante(std::string nombre, int id);
    void mostrarInfo() override;
    int matricularCurso(int creditosAcumulados);
};

#endif // ESTUDIANTE_H
