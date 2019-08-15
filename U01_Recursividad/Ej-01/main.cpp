#include <iostream>
#include "potencia.h"

int main() {
    std::cout << "Ejercicio 01/01\n" << std::endl;
    int Base,Exponente;
    std::cout<<"Ingrese Base"<<std::endl;
    std::cin>>Base;
    std::cout<<"Ingrese Exponente"<<std::endl;
    std::cin>>Exponente;
    std::cout<<Base<<"^"<<Exponente<<"= "<<potencia(Base,Exponente);
    return 0;
}