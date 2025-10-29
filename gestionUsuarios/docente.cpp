#include "docente.h"
#include "estudiante.h"
#include <iostream>
#include <vector>

Docente::Docente(std::string nombre,int id):Usuario(nombre,id) {
    this->tipo="Docente";
    this->tareasCalificadas=0;
}

void Docente::mostrarInfo(){
    std::cout <<"Docente "<< Usuario::getNombre() << " | ID : " << Usuario::getId() << "| Numero De Tareas Calificadas : "
              <<this->tareasCalificadas << " | Bloqueado : "<< std::boolalpha << this->bloqueado << "\n" << std::endl;
}

int Docente::calificarTarea(std::vector<Usuario*>usuarios ,std::string nombre){
    for(int i = 0; i<usuarios.size();i++){
        Estudiante * e = dynamic_cast<Estudiante*>(usuarios[i]);
        if (e == 0) {
            continue;
        }
        if(e->getNombre()==nombre){
            if(e->calificado==true){
                std::cout << "El Estudiante " << nombre << " Ya Estaba Calificado \n" << std::endl;
                return -1;
            }else{
                e->calificado=true;
                std::cout << "El Estudiante " << nombre << " Fue Calificado Con Exito \n" << std::endl;
                this->tareasCalificadas = tareasCalificadas + 1;
                return tareasCalificadas;
            }
        }
    }
    std::cout << "No Se Encontro Usuario Con Ese Nombre" << std::endl;
    return -1;
}
