#include "Triangulo.h"
#include <cmath>

Triangulo::Triangulo(float xAlto, float xAncho, int xColor, float xAngulo) : Geometria (xAlto,xAncho,xColor){
    Angulo=xAngulo;
}

float Triangulo::GetPerimetro() {
    return Alto+Ancho+(sqrt((Alto*Alto)+(Ancho*Ancho)));
}

float Triangulo::GetSuperficie() {
    return Alto*Ancho/2;
}

float Triangulo::GetAngulo() {
    return Angulo;
}

