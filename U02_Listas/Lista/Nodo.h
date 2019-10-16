#ifndef PROGRAMACION3_NODO_H
#define PROGRAMACION3_NODO_H
template<class T>
class Nodo {
private:
    T           Dato;
    Nodo <T>    *Enlace;
public:
    Nodo (T d) { /*  Inicializa un nodo que apunta a NULL.  */
        Dato=d;
        Enlace= nullptr;}

    Nodo (T p, Nodo <T> *n) {
        Dato=p;
        Enlace=n;}

    T GetDato(){
        return Dato;}

    Nodo<T> *GetSiguiente() {
        return Enlace;}

    void PonerEnlace(Nodo <T> *sgte) { /*..Insertar el Nodo siguiente..*/
        Enlace=sgte;}

};

#endif //PROGRAMACION3_NODO_H