#ifndef LISTA_H
#define LISTA_H

/**
 * Clase que implementa una Lista Enlasada generica, ya que puede
 * almacenar cualquier tipo de dato T
 * @tparam T cualquier tipo de dato
 */
#include "Nodo.h"
template<class T>
class Lista {
private:
    Nodo <T>    *Primero;
public:
    Lista();

    Lista(const Lista<T> &li);

    ~Lista();

    bool esVacia();

    int getTamanio();

    void insertar(unsigned int pos, T dato);

    void insertarPrimero(T dato);

    void insertarUltimo(T dato);

    void remover(unsigned int pos);

    T getDato(unsigned int pos);

    void reemplazar(unsigned int pos, T dato);

    void vaciar();
};


/**
 * Constructor de la clase Lista
 * @tparam T
 */
template<class T>
Lista<T>::Lista() {
    Primero=nullptr;
}


/**
 * Constructor por copia de la clase Lista
 * @tparam T
 * @param li
 */
template<class T>
Lista<T>::Lista(const Lista<T> &li) {
    Nodo<T> *Actual = Primero , *xActual = li.Primero , *Nuevo;

    Primero=li.Primero;

    if(xActual != nullptr) {
        while (xActual->GetSiguiente() != nullptr) {
            xActual = xActual->GetSiguiente();
            Nuevo =  new Nodo(xActual);
            Actual->GetSiguiente();
            Actual=Nuevo;
        }
    }
}


/**
 * Destructor de la clase Lista, se encarga de liberar la memoria de todos los nodos
 * utilizados en la lista
 * @tparam T
 */
template<class T>
Lista<T>::~Lista() {
    vaciar();
}


/**
 * Metodo para saber si la lista esta vacia
 * @tparam T
 * @return true si la lista esta vacia, sino false
 */
template<class T>
bool Lista<T>::esVacia() {
    return Primero == nullptr;
}


/**
 * Metodo para obtener la cantidad de nodos de la lista
 * @tparam T
 * @return la cantidad de nodos de la lista
 */

template<class T>
int Lista<T>::getTamanio() {
    Nodo <T> *Indice=Primero;
    int Contador=0;
    while(Indice!= nullptr){
        Indice=Indice->GetSiguiente();
        Contador++;
    }
    return Contador;
}


/**
 * Inserta un nodo con el dato en la posicion pos
 * @tparam T
 * @param pos lugar donde será insertado el dato
 * @param dato  dato a insertar
 */
template<class T>
void Lista<T>::insertar(unsigned int pos, T dato) {
    Nodo<T>* Indice=Primero,*Nuevo;
    int PosActual=0;

    if(Primero == nullptr)
        return;

    if(pos==0){
        Nuevo=new Nodo<T>(dato , Indice);
        Primero=Nuevo;
    }

    while (PosActual < pos-1 && Indice!= nullptr){
        Indice=Indice->GetSiguiente();
        PosActual++;
    }

    if(Indice==nullptr)
        throw 404;

    Nuevo=new Nodo<T> (dato,Indice->GetSiguiente());
    Indice->PonerEnlace(Nuevo);
}


/**
 * Inserta un nodo con el dato en la primera posicion
 * @tparam T
 * @param dato dato a insertar
 */
template<class T>
void Lista<T>::insertarPrimero(T dato) {
    Nodo<T> *Nuevo , *Indice = Primero;

    if (Primero == nullptr) {
        Nuevo = new Nodo(dato);
        Primero = Nuevo;
        return;
    }

    Nuevo = new Nodo<T> (dato , Indice);
    Primero = Nuevo;
}


/**
 * Inserta un nodo con el dato en la ultima posicion
 * @tparam T
 * @param dato dato a insertar
 */
template<class T>
void Lista<T>::insertarUltimo(T dato) {
    Nodo<T> *Nuevo , *Indice = Primero;

    if(Indice == nullptr){
        Nuevo = new Nodo<T> (dato);
        Primero = Nuevo;
        return;
    }


    while (Indice->GetSiguiente() != nullptr){
        Indice = Indice->GetSiguiente();}

    Nuevo=new Nodo(dato);
    Indice->PonerEnlace(Nuevo);
}


/**
 * Elimina el nodo en la posicion 'pos' de la lista enlazada
 * @tparam T
 * @param pos posicion del nodo a eliminar
 */
template<class T>
void Lista<T>::remover(unsigned int pos) {
    Nodo<T> *Anterior=nullptr , *Actual=Primero;
    int PosActual=0;

    while(PosActual<pos && Actual!= nullptr){
        Anterior=Actual;
        Actual=Actual->GetSiguiente();
        PosActual++;
    }

    if(Actual==nullptr)
        throw 404;

    if(pos==0){
        Primero = Primero->GetSiguiente();
        delete Actual;
        return;
    }
    Anterior->PonerEnlace(Actual->GetSiguiente());
    delete Actual;
}


/**
 * Obtener el dato del nodo en la posicion pos
 * @tparam T
 * @param pos posicion del dato
 * @return dato almacenado en el nodo
 */
template<class T>
T Lista<T>::getDato(unsigned int pos) {
    Nodo<T> *Indice=Primero;
    int PosActual=0;

    if(Primero == nullptr)
        throw 404;

    if(pos==0)
        return Primero->GetDato();

    while(Indice != nullptr && PosActual < pos){
        Indice=Indice->GetSiguiente();
        PosActual++;
    }

    if(Indice == nullptr)
        throw 404;

    return Indice->GetDato();
}


/**
 * Reemplaza el dato almacenado en un nodo por este otro
 * @tparam T
 * @param pos posicion donde se desea reemplazar
 * @param dato nuevo dato a almacenar
 */
template<class T>
void Lista<T>::reemplazar(unsigned int pos, T dato) {
    Nodo<T> *Nuevo, *Actual = Primero, *Anterior = nullptr;
    int PosActual = 0;

    while(PosActual<pos && Actual!= nullptr){
        Anterior=Actual;
        Actual=Actual->GetSiguiente();
        PosActual++;
    }

    if(Actual == nullptr)
        throw 404;

    if(pos == 0){
        Nuevo = new Nodo<T> (dato , Primero->GetSiguiente());
        Primero->PonerEnlace(Nuevo);
        delete Actual;
    }

    Nuevo = new Nodo<T> (dato , Actual->GetSiguiente());
    Anterior->PonerEnlace(Nuevo);
    delete Actual;
}


/**
 * Función que vacia la lista enlazada
 * @tparam T
 */
template<class T>
void Lista<T>::vaciar() {
    Nodo<T> *Anterior = nullptr , *Actual = Primero;
    while(Actual != nullptr){
        Anterior = Actual;
        Actual = Actual->GetSiguiente();
        delete Anterior;
    }
    Primero = nullptr;
}


#endif //LISTA_H