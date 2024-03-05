#include<iostream>
#include <Mascota.hpp>
#include <Alimento.hpp>
#include<list>

int main(int argc, char const *argv[])
{
    std::list<Mascota>mascotas;

    Mascota m1; //Instancia
    Mascota m2;

    mascotas.push_back(m1);
    mascotas.push_back(m2);

    Alimento a1(5);
    Alimento a2(2);

    
    m1.Comer(a1);
    m2.Comer(a2);
    for(auto &&mascota : mascotas){
        
    }

    cout<<"Mascota 1 Energia:"<< m1.LeerEnergia() <<endl
        <<"Mascota 2 Energia:"<< m2.LeerEnergia() <<endl;

    return 0;
}
