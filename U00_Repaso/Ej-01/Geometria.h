#ifndef REPASO_GEOMETRIA_H
#define REPASO_GEOMETRIA_H


class Geometria {
protected:
    float Alto;
    float Ancho;
    char* Color;
public:
    Geometria (float,float,char*);
    virtual float GetSuperficie()= 0;
    virtual float GetPerimetro()= 0;
};


#endif //REPASO_GEOMETRIA_H
