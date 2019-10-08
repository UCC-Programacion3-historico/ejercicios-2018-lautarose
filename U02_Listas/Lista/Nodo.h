//
// Created by root on 7/10/19.
//

#ifndef PROGRAMACION3_NODO_H
#define PROGRAMACION3_NODO_H
template<class T>
class Nodo {
protected:
    T           Dato;
    Nodo <T>    *Enlace;
public:
    Nodo                (T);        /*  Inicializa un nodo que apunta a NULL.  */
    Nodo                (T,Nodo*);
    T       GetDato     ();
    Nodo    *GetEnlace  ();
    void    PonerEnlace (Nodo*);    /*..Insertar el Nodo siguiente..*/

};


template<class T>
Nodo<T>::Nodo(T d) {
    Dato=d;
    Enlace= nullptr;
}


template<class T>
Nodo<T>::Nodo(T p, Nodo <T> *n) {
    Dato=p;
    Enlace=n;
}


template<class T>
T Nodo<T>::GetDato() {
    return Dato;
}


template<class T>
Nodo *Nodo<T>::GetEnlace() {
    return Enlace;
}


template<class T>
void Nodo<T>::PonerEnlace(Nodo <T> *sgte) {
    Enlace=sgte;
}


#endif //PROGRAMACION3_NODO_H