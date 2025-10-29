#include "estudiante.h"
#include <iostream>

Estudiante::Estudiante(std::string nombre, int id):Usuario (nombre,id){
    this->tipo="Estudiante";
    this->creditosAcumulados = 5;
    this->calificado = false;
}

void Estudiante::mostrarInfo(){
     std::cout <<"Estudiante "<< Usuario::getNombre() << "| ID : " << Usuario::getId() << " | Creditos Acumulados : "
              <<this->creditosAcumulados << " | Bloqueado : " << std::boolalpha << this->bloqueado << "\n" << std::endl;
}


int Estudiante::matricularCurso(int creditosAcumulados){
    if(creditosAcumulados==0){
        std::cout<<"Creditos Insuficientes"<<std::endl;
        return -1;
    }else{
        std::cout<<"Clase Matriculada Exitosamente "<< Usuario::getNombre() <<std::endl;
        this->creditosAcumulados = creditosAcumulados-1;
        return this->creditosAcumulados;
    }
};
