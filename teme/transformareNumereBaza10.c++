#include <iostream>
using namespace std;
/*
Se numeroteaza cifrele de la dreapta la stanga , incepand cu valoarea
0 , dupa care se calculeaza suma , cifra ori baza la puterea pozitiei.
*/

// ex: 1100 = 1 * 2^3 + 1 * 2^2 + 0*2^1 +  0*2*0 = 12
int main() {
    int rezultat=0, nr, b, p=1;
    
    cout << "Introdu numarul dorit (fara hexadecimale)= ";
    cin >> nr;
    cout << "\nIntrodu baza numarului= ";
    cin >> b;

        while (nr != 0)
        {
            int cifra = nr % 10;
            rezultat = rezultat + cifra * p;
            p = p * b;
            nr = nr / 10;
        }
        cout << "\nNumarul tau in baza 10 este egal cu: " << rezultat;
    }
/* Varianta Sosu
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int bazaInitiala,bazaFinala,p=0,numarFinal=0;
    int numarInitial;

    cout << "Introdu un numar (fara hex) : ";
    cin >> numarInitial;
    cout << endl;

    if (numarInitial >= 0 && numarInitial < 10) {
        cout << "Numarul este deja in baza 10 !";
        return 0;
    }
    cout << "Baza numarului de mai sus : ";
    cin >> bazaInitiala;
    cout << endl;

    while (numarInitial != 0) {
        numarFinal += ( (numarInitial % 10) * pow(bazaInitiala,p) );
        numarInitial /= 10;
        p++;
    }
    cout << "Numarul in baza 10 este :  " << numarFinal;

}
*/
