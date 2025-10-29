#include "administrador.h"
#include <iostream>
#include <ostream>

Administrador::Administrador(std::string nombre, int id):Usuario(nombre,id) {
    this->tipo="Admin";
    this->nivelDePermisos=3;
}

void Administrador::mostrarInfo(){
    std::cout <<"Admin "<< Usuario::getNombre() << "| ID : " << Usuario::getId() << " | Nivel De Permisos : "
              <<nivelDePermisos << " | Bloqueado : " << std::boolalpha << this->bloqueado <<  "\n"<< std::endl;
}
void Administrador::bloquearUsuario(std::vector<Usuario*>usuarios ,std::string nombre){

    for(int i = 0; i<usuarios.size();i++){
        if(usuarios[i]->getNombre()==nombre && usuarios[i]->tipo!="Admin"){

            if(usuarios[i]->bloqueado==true){
                std::cout<<"El Usuario " << nombre << " Ya Esta Bloqueado"<< "\n" << std::endl;
                return;
            }else{
                usuarios[i]->bloqueado=true;
                std::cout<<"El Usuario " << nombre << " Fue Bloqueado Con Exito"<< "\n" << std::endl;
                return;
            }
        }else if(usuarios[i]->tipo=="Admin"){
            std::cout << "El Usuario " << nombre << " Es Un Administrador"<< "\n" << std::endl;
            return;
        }
    }
 std::cout << "No Se Encontro Usuario Con Ese Nombre" << std::endl;
}
