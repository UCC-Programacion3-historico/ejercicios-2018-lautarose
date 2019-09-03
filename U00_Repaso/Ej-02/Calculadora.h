#ifndef REPASO_CALCULADORA_H
#define REPASO_CALCULADORA_H

template<class T>
class Calculadora {
public:
    T suma(T a, T b);

    T resta(T a, T b);

    T divi(T a, T b);

    T multi(T a, T b);
};

template<class T>
T Calculadora<T>::suma(T a, T b) {
    return a + b;
}

template<class T,>
T Calculadora<T>::resta(T a, T b) {
    return a - b;
}

template<class T>
T Calculadora<T>::multi(T a, T b) {
    return a * b;
}

template<class T>
T Calculadora<T>::divi(T a, T b) {
    return (T)a / b;
}
#endif //REPASO_CALCULADORA_H
