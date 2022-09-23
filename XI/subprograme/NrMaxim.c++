/*
Să se scrie o funcție care are ca parametru un număr natural n și returnează cel mai mare număr care poate fi obținut mutând, pe rând, 
prima cifră a numărului n și a celor obținute pe parcurs, pe ultima poziție. Nu se vor folosi șiruri de caractere și tablouri auxiliare.

Restricţii şi precizări
numele funcției va fi nrmaxim
funcția va avea un parametru reprezentând numărul dat, care va fi mai mic decât 1.000.000.000

Exemplu
nrmaxim(n=4273) = 7342 – este cel mai mare număr dintre 2734, 7342, 3427, 4273.

Sursa problemei: Admitere Mate-Info UBB, iulie 2015	
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int nrmaxim(int n) {
    int aux = n, nrmax = n, p = 1;
    while (aux > 9) {
        p *= 10;
        aux /= 10;
    }
    aux = n;

    do {
        aux = (aux / p) + (aux % p)*10;
        if (nrmax < aux) nrmax = aux;

    } while (aux != n);

    return nrmax;
}

int main () {
    int n;
    cin >> n;
    cout << nrmaxim(n);
}
