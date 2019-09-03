#include <iostream>
#include "sumatoria.h"

int main() {
    std::cout << "Ejercicio 01/02\n" << std::endl;
    int *a;
    a=new int[6];
    a[0]=0;
    a[1]=0;
    a[2]=0;
    a[3]=0;
    a[4]=0;
    a[5]=0;
    std::cout<<"sumatoria= "<<sumatoria(a,6);
    return 0;
}