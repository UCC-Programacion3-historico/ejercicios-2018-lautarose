#ifndef REPASO_CALCULADORA_H
#define REPASO_CALCULADORA_H

#include <iostream>

template<class T, class P>

class Calculadora {
public:
    T suma(T a, T b);

    T resta(T a, T b);

    P divi(T a, T b);

    T multi(T a, T b);
};

template<class T, class P>
T Calculadora<T, P>::suma(T a, T b) {
    return a + b;
}

template<class T, class P>
T Calculadora<T, P>::resta(T a, T b) {
    return a - b;
}

template<class T, class P>
T Calculadora<T, P>::multi(T a, T b) {
    return a * b;
}

template<class T, class P>
P Calculadora<T, P>::divi(T a, T b) {
    try {
        if (b == 0)
            throw b;
        else
            return (P) a / b;


    }
    catch (T e){
        std::cout<<"El denominador no es valido."<<std::endl;
    }
}
#endif //REPASO_CALCULADORA_H
