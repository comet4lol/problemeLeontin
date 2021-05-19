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