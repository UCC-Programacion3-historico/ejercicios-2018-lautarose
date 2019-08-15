#ifndef REPASO_GEOMETRIA_H
#define REPASO_GEOMETRIA_H
#include "Color.h"

class Geometria {
protected:
    float Alto;
    float Ancho;
    Geometria(float, float ,int);
    virtual float GetSuperficie()= 0;
    virtual float GetPerimetro()= 0;
public:
    Color Color;
};


#endif //REPASO_GEOMETRIA_H
