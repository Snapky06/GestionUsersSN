#include "administrador.h"
#include "docente.h"
#include "estudiante.h"
#include "usuario.h"
#include <QCoreApplication>

#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::vector<Usuario*> usuarios;

    usuarios.push_back(new Estudiante("Carlos",1));
    usuarios.push_back(new Estudiante("Adrian",2));
    usuarios.push_back(new Administrador("Said",3));
    usuarios.push_back(new Administrador("Victor",4));
    usuarios.push_back(new Docente("Fernando",5));
    usuarios.push_back(new Docente("Samuel",6));

    int option = 0;
    int tmp = 0;
    std::string nombre;
    int id;
    while(option!=4){

        std::cout << "[1]Agregar Estudiante, Docente o Administrador" << std::endl;
        std::cout << "[2]Listar Usuarios" << std::endl;
        std::cout << "[3]Acciones Especificas" << std::endl;
        std::cout << "[4]Salir" << std::endl;
        std::cout << " - Ingrese La Opcion Deseada : ";

        std::cin >> option;
        std::cout << "\n" << std::endl;

        switch(option){


        case 1:
            std::cout << "\n" << std::endl;
            std::cout << "[1]Estudiante" << std::endl;
            std::cout << "[2]Docente" << std::endl;
            std::cout << "[3]Administrador" << std::endl;
            std::cout << " - Que Tipo De Usuario Desea Agregar : " ;

            std::cin >> tmp;
            std::cout << "\n";
            std::cout << "Coloque Un Nombre : ";
            std::cin >> nombre;

            std::cout << "Coloque Un ID : ";
            std::cin >> id;

            for(int i = 0; i < usuarios.size() ; i++){
                if(usuarios[i]->getId()==id) std::cout << "Este Id Ya Esta En Existencia" << "\n"<< std::endl; break;
            }

            switch(tmp){

            case 1:
                usuarios.push_back(new Estudiante(nombre,id));
                break;

            case 2 :
                usuarios.push_back(new Docente(nombre,id));
                break;

            case 3:
                usuarios.push_back(new Administrador(nombre,id));
                break;

            default:
                std::cout << "Esta Opcion No Es Valida" << std::endl;
                break;
            }
            break;

            //Fin De Agregar Usuarios

        case 2:
            for(int i = 0 ; i < usuarios.size() ; i++){
                usuarios[i]->mostrarInfo();
            }
            break;

            //Fin De Listar Usuarios

        case 3:

            std::cout << "[1]Matricular Curso" << std::endl;
            std::cout << "[2]Calificar Tarea" << std::endl;
            std::cout << "[3]Bloquear Usuario" << std::endl;
            std::cout << " - Que Tipo De Usuario Desea Agregar : " ;

            std::cin >> tmp;
            std::cout << "\n" ;
            switch(tmp){

            case 1:
                std::cout << "Que Estudiante Desea Matricular" << std::endl;
                std::cout << "\n" ;
                for(int i = 0 ; i < usuarios.size() ; i++){
                    if(usuarios[i]->tipo=="Estudiante"){
                        usuarios[i]->mostrarInfo();
                    }
                }
                std::cout << "Nombre : ";
                std::cin >> nombre;
                std::cout << "\n";

                for(int i = 0 ; i < usuarios.size() ; i++){
                    if(usuarios[i]->getNombre()==nombre){
                    Estudiante* e = dynamic_cast<Estudiante*>(usuarios[i]);
                        e->matricularCurso(e->creditosAcumulados);
                    }
                }
                break;

            case 2 :
                std::cout << "La Tarea De Quien Quiere Revisar" << std::endl;
                std::cout << "\n" ;
                for(int i = 0 ; i < usuarios.size() ; i++){
                    if(usuarios[i]->tipo=="Estudiante"){
                        usuarios[i]->mostrarInfo();
                    }
                }
                std::cin >> nombre;
                for(int i = 0 ; i < usuarios.size() ; i++){
                    if(usuarios[i]->getNombre()==nombre){
                        Docente* e = dynamic_cast<Docente*>(usuarios[i]);
                        e->calificarTarea(usuarios,nombre);
                    }
                }
                break;

            case 3:
                std::cout << "A Quien Desea Bloquear" << std::endl;
                std::cout << "\n" ;
                for(int i = 0 ; i < usuarios.size() ; i++){
                    if(usuarios[i]->tipo!="Admin"){
                        usuarios[i]->mostrarInfo();
                    }
                }
                std::cin >> nombre;
                for(int i = 0 ; i < usuarios.size() ; i++){
                    if(usuarios[i]->getNombre()==nombre){
                        Administrador* e = dynamic_cast<Administrador*>(usuarios[i]);
                        e->bloquearUsuario(usuarios,nombre);
                    }
                }
                break;

            default:
                std::cout << "Esta Opcion No Es Valida" << std::endl;
                break;
            }
            break;
            //Fin De Acciones Especificas

        case 4:
            break;
            //Salida

        default:
            std::cout << "Esta Opcion No Es Valida" << std::endl;
            break;
        }

    }
    std::cout << "Borrando Memoria" << std::endl;
    for (int var = 0; var < usuarios.size(); ++var) {
        delete usuarios[var];
    }

    usuarios.clear();
    //Borrado De Memoria

    std::cout << "\nTenga Un Buen Dia" << std::endl;
    return a.exec();
}
