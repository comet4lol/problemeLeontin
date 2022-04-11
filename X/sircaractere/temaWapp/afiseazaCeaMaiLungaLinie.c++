#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    // Se citesc mai multe linii.
    // Sa se afiseze cea mai lunga linie. 
    // Citirea se termina cand se introduce o linie goala.
    char linii[100][100],sirCitit[100] = "";
    int lungime = 1,k=-1,pozitieMax=0,lungimeMax=0;
    while ( lungime > 0) {
        cout << "Introdu linie : ";
        cin.getline(sirCitit,100);
        lungime = strlen(sirCitit);
        if ( lungime == 0 ) break;
        k++;
        strcpy(linii[k],sirCitit);
        if ( lungime > lungimeMax) {
            pozitieMax = k;
            lungimeMax = lungime;
        }
        cout << endl;
    }
    cout << "Rezultat : " << linii[pozitieMax] << endl << "Cu lungimea : " << lungimeMax;
}
