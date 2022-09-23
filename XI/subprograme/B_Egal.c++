/*
Subprogramul Egal are un parametru, n, prin care primește un număr natural cu cel puțin o cifră impară. 
Subprogramul returnează valoarea 1 dacă toate cifrele impare ale lui n sunt egale între ele sau valoarea 0 în caz contrar.

Scrieți definiția completă a subprogramului

Exemplu
Dacă n=7727470 sau n=7240 atunci subprogramul returnează 1, iar dacă n=7921470 atunci subprogramul returnează 0..

Sursa: Subiect bacalaureat 2019, sesiunea specială	

*/

#include <iostream>
#include <string.h>

using namespace std;

bool Egal(long long n) {
    int impar = 0;
    while (n > 0) {
        if (n % 10 % 2 == 1) {
            if (impar != 0) {
                if (impar != n % 10) return false;
            } else impar = n % 10;
        }
        n /= 10;
    }
    return true;
}

int main () {
    long long n;
    cin >> n;
    cout << Egal(n);
}