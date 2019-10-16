#include <iostream>
#include "../Lista/Lista.h"
using namespace std;

int main() {
    Lista <int> list;

    int n , m;

    cout<<"Ingrese el tamanio deseado de la lista"<<endl;

    cin>>n;

    for (int i = 0 ; i < n ; i++){
         cout << "Ingrese el elemento " << i << " de la lista" << endl;
         int dato;
         cin >> dato;
         list.insertarUltimo(dato);
    }

    cout << "Ingrese la cantidad de elementos que desea agregar" << endl;

    cin >> m;

    for (int i = 0 ; i < m ; i++){
        int pos;
        cout << "Ingrese el lugar en donde quiere insertar el elemento " << i << endl;
        cout<< "1: Ingresar al principio" << endl << "2: Ingresar al medio" << endl << "3: ingresar al final" << endl;
        cin >> pos;
        cout << "Ingrese el dato a insertar " << endl;
        int dato;
        cin >> dato;
        switch (pos){
            case 1: list.insertarPrimero(dato);
                break;
            case 2: list.insertar((list.getTamanio()/2) , dato);
                break;
            case 3: list.insertarUltimo(dato);
            default:break;
        }
    }

    for(int i = 0 ; i < list.getTamanio() ; i++){
        cout << "El elemento " << i << " de la lista es: " << list.getDato(i) << endl;
    }

    list.vaciar();

    return 0;
}