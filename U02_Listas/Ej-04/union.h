#include "../Lista/Lista.h"

#ifndef UNION_H
#define UNION_H


template<class T>
Lista<T> *unir(Lista<T> &lisA, Lista<T> &lisB) {
    auto List = new Lista<T>;
    for(int i = 0 ; i < lisA.getTamanio() ; i++){
        List->insertarUltimo(lisA.getDato(i));
    }
    for(int i = 0 ; i < lisB.getTamanio() ; i++){
        List->insertarUltimo(lisB.getDato(i));
    }
    return List;
}

#endif //UNION_H
