/*

Se citesc de la tastatura cele n elemente ale unui sir de numere intregi.
 Sa se afiseze toate perechile de elemente (nu neaparat consecutive), 
 cu proprietatea ca ambele elemente ale perechii au aceeasi suma a cifrelor.
  Pentru calculul sumei cifrelor unui numar se va folosi o functie care primeste ca parametru, numarul respectiv.

*/

#include <iostream>

using namespace std;

int sumaCifrelor(int numar) {
    int suma = 0;
    while (numar != 0) {
        suma += numar % 10;
        numar /= 10;
    }
    return suma;
}


int auAceiasiSumaCifrelor(int numar1, int numar2) {
    return sumaCifrelor(numar1) == sumaCifrelor(numar2);
}

int main() {
    int n;
    cout << "Introduceti numarul de elemente in sir: ";
    cin >> n;

    cout << "Introduceti elementele sirului:";
    int sir[n];
    for (int i = 0; i < n; ++i) {
        cin >> sir[i];
    }

    cout << "Perechile de numere cu aceeasi suma a cifrelor sunt:";
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (auAceiasiSumaCifrelor(sir[i], sir[j])) {
                cout << "(" << sir[i] << ", " << sir[j] << ")";
            }
        }
    }

    return 0;
}