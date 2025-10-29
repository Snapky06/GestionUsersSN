#include "estudiante.h"
#include <iostream>
Estudiante::Estudiante(std::string tipo, std::string nombre, int id):Usuario (tipo,nombre,id){
    this->tipo = "Estudiante";
    this->creditosAcumulados=5;
}

void Estudiante::mostrarInfo(){
     std::cout << this->tipo << this->nombre << this->getId() << std::endl;
}

int Estudiante::getId(){
    return this->id;
};

int matricularCurso(int creditosAcumulados){
    if(creditosAcumulados==0){
        std::cout<<"Creditos Insuficientes"<<std::endl;
        return -1;
    }else{
        return creditosAcumulados - 1;
    }
};
