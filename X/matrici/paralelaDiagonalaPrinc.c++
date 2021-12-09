/* 
Se da o pozitie din matrice aleatorie, sa se faca suma elementelor de pe paralela la diagonala principala care
include elementul de pe pozitia introdusa 
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main () {

    int n,pozi,pozj;

    cout << "Introdu marimea matricii patrate: ";
    cin >> n;

    cout << "Introdu pozitia i si j: ";
    cin >> pozi >> pozj;

    int A[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = rand() % 10;
            cout << A[i][j] << "\t";

        }
    cout << "\n"; }
    int s = 0;
    if (pozi > pozj) {
        int i = pozi - pozj;
        int j = 0;
        while (i < n) {
            s += A[i][j];
            i++;
            j++;
        }
    } else { 
        int j = pozj - pozi;
        int i = 0;
        while (j < n) {
            s += A[i][j];
            i++;
            j++;
        }
    }

    cout << "\nSuma diagonalei este = " << s;
}