#ifndef LISTA_H
#define LISTA_H
#include "../../U02_Listas/Lista/Nodo.h"



/**
 * Clase que implementa una Pila generica, ya que puede
 * almacenar cualquier tipo de dato T
 * @tparam T cualquier tipo de dato
 */


template<class T>
class Pila {
private:
    Nodo<T> *Tope;
public:
    Pila();

    ~Pila();

    void push(T dato);

    void pop();

    T peek(); /* Muestra el tope de la pila */

    bool esVacia();
};


/**
 * Constructor de la clase Pila
 * @tparam T
 */
template<class T>
Pila<T>::Pila() {
    Tope = nullptr;
}


/**
 * Destructor de la clase Lista, se encarga de liberar la memoria de todos los nodos
 * utilizados en la lista
 * @tparam T
 */
template<class T>
Pila<T>::~Pila() {
    while (Tope != nullptr){
        pop();
    }
}


/**
 * Inserta un dato en la pila
 * @tparam T
 * @param dato  dato a insertar
 */
template<class T>
void Pila<T>::push(T dato) {
    Nodo <T> *Nuevo;
    Nuevo = new Nodo<T> (dato , Tope);
    Tope=Nuevo;
}


/* Devuelve el elemento que se encuentra en el tope*/

template<class T>
T Pila<T>::peek() {
    return Tope->GetDato();
}


/* Elimina el tope de la lista*/
template<class T>
void Pila<T>::pop() {
    T dato;
    Nodo<T> *aBorrar = Tope;

    if (Tope == nullptr)
        throw 404;

    dato = Tope->getDato();
    Tope = Tope->getSiguiente();
    delete aBorrar;
    return dato;
}

/**
 * Responde si la pila se encuentra Vacía
 * @tparam T
 * @return
 */
template<class T>
bool Pila<T>::esVacia() {
    return Tope == nullptr;
}

#endif //LISTA_H