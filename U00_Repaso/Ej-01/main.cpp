#include <iostream>
#include "Cuadrado.h"
#include "Circulo.h"
#include "Triangulo.h"
using namespace std;
int main() {
    std::cout << "Ejercicio 00/01\n" <<std::endl;


    Cuadrado Cuadradito(5,5,3);
    Triangulo Triangulito(5,10,2,26.5);
    Circulo Circulito(8,8,1);

    cout<<"Cuadrado"<<endl;
    cout<<"Diagonal: "<<Cuadradito.GetDiagonal()<<endl;
    cout<<"Perimetro: "<<Cuadradito.GetPerimetro()<<endl;
    cout<<"Superficie: "<<Cuadradito.GetSuperficie()<<endl;
    Cuadradito.Color.GetColor();
    Cuadradito.Color.Tenir(3);
    Cuadradito.Color.GetColor();
    cout<<endl;


    cout<<"Circulo"<<endl;
    cout<<"Radio: "<< Circulito.GetRadio()<<endl;
    cout<<"Perimetro: "<<Circulito.GetPerimetro()<<endl;
    cout<<"Superficie: "<<Circulito.GetSuperficie()<<endl;
    Circulito.Color.GetColor();
    cout<<endl;


    cout<<"Triangulo"<<endl;
    cout<<"Angulo:"<<Triangulito.GetAngulo()<<endl;
    cout<<"Perimetro: "<<Triangulito.GetPerimetro()<<endl;
    cout<<"Superficie: "<<Triangulito.GetSuperficie()<<endl;
    Triangulito.Color.GetColor();
    Triangulito.Color.Tenir(1);
    Triangulito.Color.GetColor();
    return 0;
}

