#include "docente.h"
#include "estudiante.h"
#include <iostream>
#include <vector>

Docente::Docente(std::string nombre,int id):Usuario(nombre,id) {
    this->tipo="Docente";
}

void Docente::mostrarInfo(){
    std::cout <<"Es El Docente "<< Usuario::getNombre() << " : " << Usuario::getId() << " Numero De Tareas Calificadfas : "
              <<tareasCalificadas << std::endl;
}

void Docente::calificarTarea(std::vector<Usuario*>usuarios ,std::string nombre){
    for(int i = 0; i<usuarios.size();i++){

        Estudiante * e = dynamic_cast<Estudiante*>(usuarios[i]);
        if(e==0){
            std::cout<< "No Hay Estudiante Con El Nombre" << nombre << std::endl;
            return;
        }

        if(e->getNombre()==nombre){

            if(e->calificado==false){
                std::cout << "El Estudiante" << nombre << "Ya Estaba Calificado" << std::endl;
                return;
            }else{
                e->calificado=true;
                tareasCalificadas++;
                std::cout << "El Estudiatnte" << nombre << "Fue Calificado Con Exito" << std::endl;
            }
        }
        std::cout << "No Se Encontro Usuario Con Ese Nombre" << std::endl;
    }
}
