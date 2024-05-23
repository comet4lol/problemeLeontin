/*Se citeste un vector cu n componente, numere intregi si doua numere intregi a si b. Sa se elimine valorea maxima din vector.*/

#include <iostream>
using namespace std;

int main() {
    int v[100], n, a, b, max;
    cout << "Dati valoarea lui n = "; cin >> n;
    for(int i = 0; i < n; i++) {
        cout << "Dati valoarea elementului " << i << " "; cin >> v[i];
    }
    cout << "Dati valoarea lui a = "; cin >> a;
    cout << "Dati valoarea lui b = "; cin >> b;

    max = v[0];
    for(int i = 1; i < n; i++) {
        if(v[i] > max) {
            max = v[i];
        }
    }

    for(int i = 0; i < n; i++) {
        if(v[i] == max) {
            for(int j = i; j < n - 1; j++) {
                v[j] = v[j + 1];
            }
            n--;
            i--;
        }
    }

    cout << "Vectorul dupa eliminarea valorii maxime este: ";
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}