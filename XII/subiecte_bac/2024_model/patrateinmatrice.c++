#include <iostream>
using namespace std;

/*
Un joc folosește o tablă dreptunghiulară, pe care sunt reprezentate celule de dimensiune egală, dispuse
pe m linii și pe n coloane. În fiecare celulă este înscris un număr natural.
Numim pătrat de valoare p patru celule ale tablei, situate pe două linii consecutive și pe două coloane
consecutive, cu proprietatea că suma valorilor înscrise în aceste celule este egală cu p. Scopul jocului
este determinarea unui pătrat de valoare maximă.
Scrieți un program C/C++ care citește de la tastatură două numere naturale din intervalul
[2,20], m și n, apoi elementele unui tablou bidimensional cu m linii și n coloane, numere
naturale din intervalul [0,104], reprezentând numerele înscrise pe tabla de joc, în
ordinea dispunerii celulelor corespunzătoare. Programul determină un pătrat de valoare
maximă al tablei și afișează pe ecran această valoare

Exemplu: pentru m=5, n=4 și tabloul alăturat, se afișează pe ecran valoarea 36, corespunzătoare
pătratului evidențiat în figură.  /*

1 1 2 30
3 10 1 2
1 13 12 1
1 2 3 1
7 1 20 1

*/

int main()

{
    
    int m,n,p,maxP=0;
    cin >> m;
    cin >> n;
    int A[m+1][n+1];
    
    if ( m > 20 || n > 20 || n < 2 || m < 2) {
        cout << "Eroare";
        return 0;
    }
    
    for (int i =0 ; i < m; i++) {
        for (int j = 0 ; j<n; j++) {
            cin >> A[i][j];
        }
    }
    for ( int i = 0; i < m; i++) {
        for ( int j = 0 ; j<n ;j++) {
            p = A[i][j];
            if (j+1 < n) p += A[i][j+1];
            if (j+1 < n && i+1 < m) p += A[i+1][j+1];
            if (i+1 < m) p += A[i+1][j];
            if (p > maxP) {
                maxP = p;
            }
            p = 0;
        }
    }
    cout << endl << "Maximul : " << maxP;
    // pt 
    return 0;
}