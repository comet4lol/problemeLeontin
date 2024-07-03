/*
. Fiind date două numere naturale a și b, numim valoare generată de a și b un număr obținut din a prin
alipirea la stânga sau la dreapta sa a cifrelor lui b, în ordinea în care apar în acesta.
Exemplu: dacă a=123 și b=45, se pot obține două numere generate de acestea: 12345 și 45123.
Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale din intervalul [2,50], m și n,
şi construiește în memorie un tablou bidimensional cu m linii, numerotate de la 1 la m, și n coloane,
numerotate de la 1 la n, în care fiecare element este egal cu cea mai mică valoare generată de numerele
de ordine ale liniei, respectiv coloanei pe care se află.
Programul afişează pe ecran tabloul obţinut, fiecare linie a tabloului pe câte o
linie a ecranului, elementele fiecărei linii fiind separate prin câte un spaţiu. 

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int i,j,M,N,c1,c2;

    cout << "Cate linii?  ";
    cin >> M;
    cout << endl;
    
    cout << "Cate coloane?  "; 
    cin >> N;
    cout << endl;
    int A[M][N];

    for( i = 1 ; i <= M; i++) {
        for ( j = 1 ; j <= N ; j++) {
            
            if (i < 10 && j < 10) {
            c1 = i*10 + j;
            c2 = j*10 + i; } else if (i > 10 && j > 10) {
                c1 = i*100 + j;
                c2 = j*100 + i;
            } else if (i > 10 && j < 10) {
                c1 = i*10 + j;
                c2 = j*100 + i;
            } else {
                c1 = i*100 + j;
                c2 = j*10 + i; 
            }

            A[i][j] = min(c1,c2);
            
        }
    }

    for( i = 1 ; i <= M ; i++) {
        for( j = 1 ; j <= N ; j++) {
            cout << setw(3) << A[i][j] << "  "; 
        }
        cout << "\n \n";
    }
}