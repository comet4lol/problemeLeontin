// Se citeste de la tastatura un numar ke[0,9] si un sir de numere naturale, pana la citirea numarului 0.
// Sa se afiseze toate perechiile de numere introduse consecutiv care au proprietatea ca au aceelasi numar
// de aparitii ale cifrei k in patratul lor.

#include <iostream>

using namespace std;

int main () {
    int k,x,y,aux,c1,c2;

    cout << "Introdu-l pe K: ";
    cin >> k;

    cout << "Introdu primul numar din sir:";
    cin >> x;

    do {
        cout << "Introdu urmatorul numar din sir: ";
        cin >> y;
        c1 = 0;
        c2 = 0;
        aux = x*x;
        
        while (aux > 0) {
            if (aux % 10 == k) c1++;
            aux /= 10;
        }

        aux = y*y;

        while (aux > 0) {
            if (aux % 10 == k) c2++;
            aux /= 10;
        }

        if (c1 == c2) {
            cout << "(" << x << "," << y << ")\n";
        }
    x = y;

    } while (x > 0 && y > 0);

}