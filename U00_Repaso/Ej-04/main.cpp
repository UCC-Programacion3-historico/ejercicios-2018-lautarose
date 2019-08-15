#include <iostream>

using namespace std;

int main() {
    cout << "Ejercicio 00/04\n" << endl;
    int Segundos,Horas,Minutos,xSegundos;
    std::cout<<"Ingrese Segundos"<<endl;
    std::cin>>Segundos;
    xSegundos=Segundos;
    Horas=xSegundos/3600;
    xSegundos%=3600;
    Minutos=xSegundos/60;
    xSegundos%=60;
    std::cout<<Segundos<<" Segundos equivalen a: "<<Horas<<" Horas, "<<Minutos<<" Minutos, "<<xSegundos<<" Segundos."<<endl;
    return 0;
}