#include <iostream>
#include "../Lista/Lista.h"
#include "fnInvierte.h"
using namespace std;
int main() {
    Lista <int> list;

    list.insertarUltimo(0);
    list.insertarUltimo(1);
    list.insertarUltimo(2);
    list.insertarUltimo(3);

    fnInvierte(&list);

    cout<<list.getDato(2);
}