/*
Se citeşte un şir X de numere naturale cu n elemente. Scrieţi un program care determină şirul Y de numere prime distincte, 
care figurează la puterea întâi în cel puţin o descompunere ȋn factori primi a unui număr din șirul X. 
Dacă niciun element al şirului X nu are un factor prim la puterea întâi, atunci se va tipări mesajul Sirul Y este vid.

Programul va afișa pe ecran elementele șirului Y, ordonate crescător, separate prin câte un spațiu.

Exemplul 1
Intrare

4
77 58 77 31
Ieșire

2 7 11 29 31
Exemplul 2
Intrare

4
64 36 100 125
Ieșire

Sirul Y este vid.
Exemplul 3
Intrare

4
25 5 125 5
Ieșire

5

Sursa problemei: Admitere Mate-Info UBB, septembrie 2013	

*/
#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

bool eprim(int n) {
    for (int i = 2; i <= n/2; i++) if (n % i == 0) return false;
    return true;
}

int main () {
int n,k = -1;

cout << "n=";
cin >> n;

int x[n], y[n];

for (int i = 0; i < n; i++) {
    cin >> x[i];
}

for (int i = 0; i < n; i++) {
    int T = 2;
    while (x[i] > 1 && T <= x[i]) {
        if (x[i] % T == 0) {
            x[i] /= T;
            if (x[i] % T != 0) {
                if (eprim(T)) {
                    k++;
                    y[k] = T;
                }
            } else {
                x[i] /= T;
                T++;
            }
        } else T++;
    }
}

// sortare
for (int i = 0; i < k; i++) {
    for (int j = i+1; j <= k; j++) {
        if (y[i] > y[j]) {
            int aux = y[i];
            y[i] = y[j];
            y[j] = aux;
        }
    }
}

// remove duplicate
for (int i = 0; i <= k; i++) {
    if (y[i] == y[i+1]) {
        for (int j = i+1; j < k; j++) y[j] = y[j+1];
        k--;
    }
}

if (k > -1) 
    for (int i = 0; i <= k; i++) cout << y[i] << " ";
else 
    cout << "Sirul Y este vid";

}