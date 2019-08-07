#include "Geometria.h"
#include <string.h>

Geometria::Geometria(float xAlto, float xAncho, char *xColor) {
    Ancho=xAncho;
    Alto=xAlto;
    float n;
    n=strlen(xColor);
    Color=new char[n];
    strcpy(Color,xColor);
}

