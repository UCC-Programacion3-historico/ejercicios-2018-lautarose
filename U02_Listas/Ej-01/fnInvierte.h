#include "../Lista/Lista.h"
#ifndef FNINVIERTE_H
#define FNINVIERTE_H

template <class T>
void fnInvierte (Lista<T> *lis);

template <class T>
void fnInvierte (Lista<T> *lis){

    int l = lis->getTamanio();

    int j = l;

    if (lis->esVacia())
        throw 404;

    if (l < 2)
        return;

    if (l%2 == 0)
        l=l/2;
    else
        l=(l-1)/2;

    for (int i = 0 ; i < l ; i++) {
        int Aux = lis->getDato(i);
        int xAux = lis->getDato(j - 1);
        lis->reemplazar(i, xAux);
        lis->reemplazar(j - 1, Aux);
        j--;
    }
}



#endif //FNINVIERTE_H
