#include <iostream>
using namespace std;


/*
Se da un vector cu n componente, numere naturale. 
Sa se afiseze componentele care au cel mai mare numar de cifre 1 
in scrierea numarului in baza 2.

*/

int zeceInDoi( int n) {
    int raspuns = 0, p = 1;
    while(n > 0) {
        int restCurent = n % 2; //Cifra curentă, care este defapt restul împărțirii la 2
        raspuns += p * restCurent; //Adăugăm cifra curentă la raspuns
        p = p * 10; //Formăm puterea următoare
        n = n / 2; //Îl înpartim pe n la 2 pentru a găsi următoarele cifre
    };
    return raspuns;
}

int apareUnu( int n ) {
    int k = 0;
    while (n) {
        if ( n%10 == 1) k++;
        n/=10;
    }
    return k;
}

int main() {
    int n;
    cin >> n ;
    int k, V[n+1], max = 0,posMax=0;
    for ( int i = 0 ; i < n ; i++) {
        k = apareUnu(n);
        if ( k > max) {
            max = k;
            posMax = i;
        }
    }
    for ( int i = 0 ; i < n ; i ++) {
        if ( apareUnu(zeceInDoi(V[i])) == max ) {
            cout << V[i] << " ";
        }
    }
    
}