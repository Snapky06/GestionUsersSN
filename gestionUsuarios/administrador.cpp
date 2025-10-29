#include "administrador.h"
#include <iostream>
#include <ostream>

Administrador::Administrador(std::string nombre, int id):Usuario(nombre,id) {
    this->tipo="Admin";
}

void Administrador::mostrarInfo(){
    std::cout <<"Es El Admin "<< Usuario::getNombre() << " : " << Usuario::getId() << " Nivel De Permisos : "
              <<nivelDePermisos << std::endl;
}
void Administrador::bloquearUsuario(std::vector<Usuario*>usuarios ,std::string nombre){

    for(int i = 0; i<usuarios.size();i++){

        Administrador * e = dynamic_cast<Administrador*>(usuarios[i]);

        if(e==0){
            std::cout<< "No Hay Administrador Con El Nombre" << nombre << std::endl;
            return;
        }

        if(usuarios[i]->getNombre()==nombre && usuarios[i]->tipo!="Admin"){

            if(usuarios[i]->bloqueado==true){
                std::cout<<"El Usuario " << nombre << "Ya Esta Bloqueado" << std::endl;
                return;
            }else{
                usuarios[i]->bloqueado=true;
                std::cout<<"El Usuario " << nombre << "Fue Bloqueado Con Exito" << std::endl;
            }
        }else if(usuarios[i]->tipo=="Admin"){
            std::cout << "El Usuario " << nombre << "Es Un Administrador" << std::endl;
        }
        std::cout << "No Se Encontro Usuario Con Ese Nombre" << std::endl;
    }

}
