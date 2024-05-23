/*Se citeste un numar natural n si 2 vectori de aceiasi lungime. Sa se determine produsul scalar a celor doi vectori.
Pentru citirea si afisarea vectorilor se va folosi cate o procedura care primeste ca parametri vectorul si numarul de componente*/

#include <iostream>

using namespace std;

void citire_vector(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
}

int produs_scalar(int x[], int y[], int n) {
    int P = 0;
    for (int i = 0; i < n; i++) {
        P += x[i] * y[i];
    }
    return P;
}

int main() {
    int n;
    cout << "Introduceti numarul natural n: ";
    cin >> n;

    int x[n];
    cout << "Introduceti componentele vectorului x:\n";
    citire_vector(x, n);

    int y[n];
    cout << "Introduceti componentele vectorului y:\n";
    citire_vector(y, n);

    int P = produs_scalar(x, y, n);
    cout << "Produsul scalar al vectorilor x si y este: " << P << endl;

    return 0;
}