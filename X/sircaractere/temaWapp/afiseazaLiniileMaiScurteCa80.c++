#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    // Se citesc mai multe linii.
    // Sa se afiseze toate liniile sub 80 de caractere.
    // Citirea se termina cand se introduce o linie goala.
    char linii[100][100], sirCitit[100] = "";
    int lungime = 1, k = -1;
    while (lungime > 0)
    {
        cout << "Introdu linie : ";
        cin.getline(sirCitit, 100);
        lungime = strlen(sirCitit);
        if (lungime == 0)
            break;
        else if ( lungime < 80) {
            k++;
            strcpy(linii[k],sirCitit);
        }
        cout << endl;
    }
    cout << "Rezultat : " << endl;
    for ( int i = 0 ; i < k + 1 ; i ++ ) {
        cout << linii[k] << endl;
    }
}
