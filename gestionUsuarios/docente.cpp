#include "docente.h"
#include "estudiante.h"
#include <iostream>

Docente::Docente(std::string tipo, std::string nombre, int id):Usuario(tipo,nombre,id) {
    this->tipo="Docente";
    this->tareasCalificadas=0;
    id++;
}

void Docente::calificarTarea(Estudiante* estudiante){
    if(estudiante->calificado==true){
        std::cout<<"El Estudiante "<<estudiante->nombre<<" Ya Esta Calificado"<<std::endl;
    }else{
        estudiante->calificado=true;
        tareasCalificadas++;
        std::cout<<"El Estudiante "<<estudiante->nombre<<" A Sido Calificado Con Exito"<<std::endl;
    }
}
