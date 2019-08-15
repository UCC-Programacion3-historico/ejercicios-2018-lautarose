#include "Circulo.h"

Circulo::Circulo(float xAlto , float xAncho , int xColor) : Geometria(xAlto,xAncho,xColor){
    Radio=Alto/2;
}

float Circulo::GetSuperficie() {
    return 3.14 * Radio;
}

float Circulo::GetPerimetro() {
    return 2 * 3.14 * Radio;
}

float Circulo::GetRadio() {
    return Radio;
}
