// SORTARE
// prin schimbare directa :
// Se ia pe rand fiecare componenta de la prima la penultima si se 
// compara cu toate componentele aflate in dreapta
// daca nu sunt in ordinea ceruta se inverseaza.

#include <iostream>
using namespace std;

int main() {
    int array [4] = {4,1,5,2};
    for (int i=0;i<4;i++) {
        cout << array[i] << endl;
    }
    cout << "Sortat:   ";
    for (int i=0; i<3;i++) {
        for ( int j = i+1; j<4;i++) {
            if (array[i] <array[j]) {
                int aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }
    for (int i=0;i<4;i++) {
        cout << array[i] << endl;
    }
}