#include <iostream>
#include <ctime>

using namespace std;

int main() {
    int V[1023];
    clock_t begin;
    begin = clock();

    cout << "Comenzando a medir Tiempo\n" << endl;

    for(int i=0; i<=1023; i++){
        V[i] = i;}

    clock_t end = clock();

    double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;

    cout << "Tardo elapsed_secs " << elapsed_secs << "\n" << std::endl;
    return 0;
}