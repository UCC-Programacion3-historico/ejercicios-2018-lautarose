#ifndef REPASO_CIRCULO_H
#define REPASO_CIRCULO_H

#include "Geometria.h"

class Circulo : public Geometria {
private:
    float Radio;
public:
    Circulo                 (float,float,int);
    float   GetSuperficie   () override;
    float   GetPerimetro    () override;
    float   GetRadio        ();
};


#endif //REPASO_CIRCULO_H
