/*

Într-un tablou bidimensional, cu elemente având valori numai în mulţimea {0,1}, numim coloane
„complementare” două coloane cu proprietatea că oricare două elemente ale acestora, aflate pe
aceeaşi linie, sunt diferite.
Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale din
intervalul [2,20], m şi n, şi elementele unui tablou bidimensional cu m linii şi n
coloane, numere naturale din mulţimea {0,1}. Programul afişează pe ecran numărul
de coloane ale tabloului care sunt „complementare" cu prima coloană a acestuia.
Exemplu: dacă m=3, n=6, pentru tabloul alăturat se afişează pe ecran 3.

*/


#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    int m,n,i,j,k=0;

    cout << "M (linii)=";
    cin >> m;

    cout << "N (coloane)=";
    cin >> n;

    int A[m][n];

    for( i = 0 ; i < m; i++) {
        for ( j = 0 ; j < n ; j++) {
            A[i][j] = rand() % 2;
        }
    }


    for( i = 0 ; i < m ; i++) {
        for( j = 0 ; j < n ; j++) {
            cout << setw(3) << A[i][j] << "  "; 
        }
        cout << "\n \n";
    }

    for ( j = 1; j < n; j++) {
        bool c=true;
        for (i = 1; i < m; i++) {
            if (A[i][j] == A[i][0]) {
                c = false;
            }
        }
        if (c) {
            k++;
        }
    }

    cout << k;

}