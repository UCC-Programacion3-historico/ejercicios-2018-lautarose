#include "Cuadrado.h"
#include <cmath>


Cuadrado::Cuadrado(float xAlto , float xAncho , int xColor) : Geometria(xAlto,xAncho,xColor){
}

double Cuadrado::GetDiagonal() {
    return sqrt((Alto*Alto)+(Ancho*Ancho)) ;
}

float Cuadrado::GetSuperficie() {
    float n;
    n=Alto*Alto;
    return n;
}

float Cuadrado::GetPerimetro() {
    float n;
    n=Alto*4;
    return n;
}


