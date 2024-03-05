#pragma once
#include <Alimento.hpp>
#include<string>

class Mascota
{
private:
    //Implementacion oculta
    int Energia;
    std::string nombre;
    int Felicidad;
public:
//Interfaz
    Mascota(std::string nombre) {
        this->Energia = 0;
        this->nombre = nombre;
        this->Felicidad = 0;
    }
    ~Mascota() {}
    void Comer(Alimento alimento){
        Energia += alimento.ExtraerEnergia();
    }
    void Jugar(){
        Energia -= 1;
        Felicidad += 1;
    }
    int LeerFelicidad(){
        return this->Felicidad;
    }
    int LeerEnergia(){
        return this->Energia;
    }
    std::string LeerNombre(){
        return this->nombre;
    }
};