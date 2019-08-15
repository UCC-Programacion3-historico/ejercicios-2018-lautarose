#include <iostream>
#include "Calculadora.h"
#include <vector>

using namespace std;

int main() {
    cout << "Ejercicio 00/02\n" << endl;

    Calculadora<int, float> miCalc;
    vector<int> pp;

    pp.push_back(3);


    cout << miCalc.divi(10, 0);
    return 0;
}