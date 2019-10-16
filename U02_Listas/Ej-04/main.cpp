#include <iostream>
#include "../Lista/Lista.h"
#include "union.h"
using namespace std;
int main() {
    Lista <int> ListA, ListB;


    ListA.insertarUltimo(1);
    ListA.insertarUltimo(2);
    ListA.insertarUltimo(3);
    ListA.insertarUltimo(4);
    ListA.insertarUltimo(5);
    ListA.insertarUltimo(6);


    ListB.insertarUltimo(7);
    ListB.insertarUltimo(8);
    ListB.insertarUltimo(9);
    ListB.insertarUltimo(10);


    auto List = new Lista<int>;

    List=unir(ListA,ListB);

    for (int i=0 ; i < List->getTamanio() ; i++){
        cout << "Elemento " << i << " : "  << List->getDato(i) << endl;
    }
}