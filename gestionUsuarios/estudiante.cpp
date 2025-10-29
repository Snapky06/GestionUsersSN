#include "estudiante.h"
#include <iostream>
Estudiante::Estudiante(std::string tipo, std::string nombre, int id):Usuario (tipo,nombre,id){
    this->tipo = "Estudiante";
    this->creditosAcumulados=5;
    this->calificado = false;
    id++;
}

void Estudiante::mostrarInfo(){
     std::cout << this->tipo << this->nombre << this->getId() << std::endl;
}

int Estudiante::getId(){
    return this->id;
};

int Estudiante::matricularCurso(int creditosAcumulados){
    if(creditosAcumulados==0){
        std::cout<<"Creditos Insuficientes"<<std::endl;
        return -1;
    }else{
        std::cout<<"Clase Matriculada Exitosamente "<<this->nombre<<std::endl;
        return creditosAcumulados--;
    }
};
