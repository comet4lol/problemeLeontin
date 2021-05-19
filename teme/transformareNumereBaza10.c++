#include <iostream>
#include <cmath>
#include <stdio.h>
#include <string.h>
using namespace std;
/*
Pentru a transforma un numar din baza 10 in baza 2
se fac impartiri succesive la baza pana se obtine catul 0.
Dupa care se trec resturile in ordine inversa.
*/
/*
Se numeroteaza cifrele de la dreapta la stanga , incepand cu valoarea
0 , dupa care se calculeaza suma , cifra ori baza la puterea pozitiei.
*/
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

    
    // cout << "In ce baza sa transform numarul : ";
    // cin >> bazaFinala;
    // cout << endl;
    // int aux = n;
    // while ( aux != 0) {
    //     aux /= 10;
    //     p++;
    // }
    while (numarInitial != 0) {
        numarFinal += ( (numarInitial % 10) * pow(bazaInitiala,p) );
        numarInitial /= 10;
        p++;
    }
    cout << "Numarul in baza 10 este :  " << numarFinal;
    // cout << "Numarul are : " << p << "  pozitii";
    // ex: 1100 = 1 * 2^3 + 1 * 2^2 + 0*2^1 +  0*2*0;
}