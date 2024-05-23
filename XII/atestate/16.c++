/*

Fie un vector de numere intregi. Sa se afiseze toate perechile de numere consecutive din vector,
 cu proprietatea ca al doilea numar este egal cu suma cifrelor primului numar. Pentru calculul sumei 
 cifrelor unui numar se va folosi o functie, care primeste ca parametru, numarul respectiv.

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

void afiseazaPerechi(int v[], int n) {
    cout << "Perechile sunt";
    for (int i = 0; i < n- 1; ++i) {
        int primulNumar = v[i];
        int alDoileaNumar = v[i + 1];
        if (alDoileaNumar == sumaCifrelor(primulNumar)) {
            cout << "(" << primulNumar << ", " << alDoileaNumar<<")";
        }
    }
}

int main() {
    int n;
    cout << "Introduceti numarul de elemente din vector: ";
    cin >> n;

    int v[n];
    cout << "Introduceti elementele vectorului:";
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    afiseazaPerechi(v, n);

}