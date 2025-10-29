#include "estudiante.h"
#include <iostream>

Estudiante::Estudiante(std::string nombre, int id):Usuario (nombre,id){
    this->tipo="Estudiante";
}

void Estudiante::mostrarInfo(){
     std::cout <<"Es El Estudiante "<< Usuario::getNombre() << " : " << Usuario::getId() << "Creditos Acumulados : "
        <<creditosAcumulados << std::endl;
}


int Estudiante::matricularCurso(int creditosAcumulados){
    if(creditosAcumulados==0){
        std::cout<<"Creditos Insuficientes"<<std::endl;
        return -1;
    }else{
        std::cout<<"Clase Matriculada Exitosamente "<< Usuario::getNombre() <<std::endl;
        return creditosAcumulados--;
    }
};
