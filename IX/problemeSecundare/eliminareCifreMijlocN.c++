// Se citeste un numar natural n. Sa se afiseze numarulobtinut prin eliminarea cifrei din mijloc, daca n
// are un numar impar de ecifre, respectiv a celor doua cifre din mijloc, daca n are un numar par de cifre.
#include <iostream>

using namespace std;

int main () {
    int n,aux,k=0;

    cout << "Introdu-l pe n:";
    cin >> n;
    aux = n;

    while (aux > 0) {
        k++;
        aux /= 10;
    }
    int p = 1;
    if (k % 2 == 1) {
        for(int i=1; i<=k/2; i++) p=p*10;
        n=n/(p*10)*p+n%p;
    } else {
        for (int i=1; i<=k/2-1; i++) p=p*10;
        aux = n%p;
        n /= p*100;
        n = n * p + aux;
    }

    cout << n;
}