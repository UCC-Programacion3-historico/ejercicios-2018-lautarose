#include "Cuadrado.h"
#include <math.h>

Cuadrado::Cuadrado(float xAlto, float xAncho, char *xColor) : Geometria(xAlto,xAncho,xColor) {
}

double Cuadrado::GetDiagonal() {
    double n;
    n=sqrt((Alto*Alto)+(Ancho*Ancho))
    return n;
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


