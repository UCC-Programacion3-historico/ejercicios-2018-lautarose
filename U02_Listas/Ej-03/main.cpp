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

    int tamanio=list.getTamanio();
    int p=1;
    do{
        for(int i = 0 ; i < list.getTamanio() ; i++){
            cout << "El elemento " << i << " de la lista es: " << list.getDato(i) << endl;
        }
        cout << "Que elemento desea eliminar?" << endl;
        int Elemento;
        cin >> Elemento;
        if(Elemento<tamanio) {
            list.remover(Elemento);
            tamanio--;
        }
        cout << "Presione 1 para seguir eliminando" << endl;
        int seguir;
        cin >> seguir;
        if(seguir!=1)
            p=0;
        else{
            p=1;
        }
    }
    while(p!=0);
    cout << "Lista final:" << endl;
    for(int i = 0 ; i < list.getTamanio() ; i++){
        cout << "El elemento " << i << " de la lista es: " << list.getDato(i) << endl;
    }

}