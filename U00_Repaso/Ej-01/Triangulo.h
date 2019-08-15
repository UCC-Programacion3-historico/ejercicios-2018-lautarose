#ifndef REPASO_TRIANGULO_H
#define REPASO_TRIANGULO_H

#include "Geometria.h"

class Triangulo : public Geometria{
private:
    float Angulo;
public:
    Triangulo (float,float,int,float);
    float GetSuperficie() override;
    float GetPerimetro() override;//Suponiendo que es un triangulo rectangulo
    float GetAngulo();
};


#endif //REPASO_TRIANGULO_H
