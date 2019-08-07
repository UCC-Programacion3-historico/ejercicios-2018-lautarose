#ifndef REPASO_CUADRADO_H
#define REPASO_CUADRADO_H
#include "Geometria.h"
class Cuadrado : public Geometria {
public:
    Cuadrado (float,float,char*);
    float GetSuperficie();
    float GetPerimetro();
    double GetDiagonal();
};


#endif //REPASO_CUADRADO_H
