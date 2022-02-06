// Se introduce de la tastatura run sir de numere naturale pana la citirea numarului 0.
// Sa se afiseze toate perechile de numere introduse consecutiv care eau proprietatea ca suma cifrelor
// primului numar este para, iar suma cifrelor celui de al doilea numar este impara.
#include <iostream>

using namespace std;

int main () {
    int x,y,aux,s1,s2;
    cout << "Introdu primul numar din sir:";
    cin >> x;

    do {
        cout << "Introdu urmatorul numar din sir: ";
        cin >> y;
        s1 = 0;
        s2 = 0;
        aux = x;
        
        while (aux > 0) {
            s1 += aux % 10;
            aux /= 10;
        }

        aux = y;

        while (aux > 0) {
            s2 += aux % 10;
            aux /= 10;
        }

        if (s1 % 2 == 0 && s2 % 2 == 1) {
            cout << "(" << x << "," << y << ")\n";
        }
    x = y;

    } while (x > 0 && y > 0);

}