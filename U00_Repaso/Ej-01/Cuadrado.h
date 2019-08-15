#ifndef REPASO_CUADRADO_H
#define REPASO_CUADRADO_H
#include "Geometria.h"
class Cuadrado : public Geometria {
public:
    Cuadrado (float,float,int);
    float GetSuperficie();
    float GetPerimetro();
    double GetDiagonal();
};


#endif //REPASO_CUADRADO_H
