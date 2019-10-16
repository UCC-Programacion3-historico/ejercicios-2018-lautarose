#ifndef COLA_H
#define COLA_H

#include "../../U02_Listas/Lista/Nodo.h"
/**
 * Clase que implementa una Cola generica, ya que puede
 * almacenar cualquier tipo de dato T
 * @tparam T cualquier tipo de dato
 */
template<class T>
class Cola {
private:
    Nodo<T> *Frente;
    Nodo<T> *Final;
public:
    Cola();

    ~Cola();

    void encolar(T dato);

    T desencolar();

    bool esVacia();
};


/**
 * Constructor de la clase Cola
 * @tparam T
 */
template<class T>
Cola<T>::Cola() {
    Frente = nullptr;
    Final = nullptr;
}


/**
 * Destructor de la clase Cola, se encarga de liberar la memoria de todos los nodos
 * utilizados en la Cola
 * @tparam T
 */
template<class T>
Cola<T>::~Cola() {
    while (Frente != nullptr){
        desencolar();}
}


/**
 * Inserta un dato en la Cola
 * @tparam T
 * @param dato  dato a insertar
 */
template<class T>
void Cola<T>::encolar(T dato) {
    Nodo <T> *Nuevo;
    Nuevo = new Nodo <T> (dato);

    if(Final == nullptr)
        Frente = Nuevo;

    else
        Final->PonerEnlace(Nuevo);
    Final = Nuevo;
}


/**
 * Obtener el dato de la Cola
 * @tparam T
 * @return dato almacenado en el nodo
 */
template<class T>
T Cola<T>::desencolar() {
    Nodo <T> *xFrente;
    T dato;

    if(Frente == nullptr)
        throw 404;

    dato = Frente->GetDato();
    xFrente = Frente;
    Frente = Frente->GetSiguiente();

    if(Frente == nullptr)
        Final == nullptr;

    delete xFrente;
    return dato;
}

/**
 * Responde si la Cola se encuentra Vacía
 * @tparam T
 * @return
 */
template<class T>
bool Cola<T>::esVacia() {
    return Frente == nullptr;
}

#endif //LISTA_H