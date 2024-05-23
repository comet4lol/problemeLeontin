/*

Fie un vector cu n componente numere intregi. Sa se afiseze componentele vectorului, 
cu proprietatea ca suma cifrelor lor este divizibila cu o valoare data, k. 
Se foloseste o functie, care determina suma cifrelor unui numar, dat ca parametru.

*/

#include <iostream>
using namespace std;

int sumacifre(int n) {
    int suma= 0;
    while (n != 0) {
        suma += n % 10;
        n /= 10;
    }
    return suma;
}

int main() {
    int V[100], n, k;
    cout << "n=";
    cin >> n;
    cout << "k=";
    cin >> k;
    cout << "Introdu elementele vectorului:";
    for (int i = 0; i < n; i++) {
        cin >> V[i];
    }
    cout << "Elementele divizibile cu k sunt: ";
    for (int i = 0; i < n; i++) {
        if (sumacifre(V[i]) % k == 0) {
            cout << V[i] << " ";
        }
    }
    cout << endl;
    return 0;
}