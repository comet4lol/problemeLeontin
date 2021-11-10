#include <iostream>
using namespace std;

int main() {
    int m,n,i,j,p,max;
    cout << "Cate linii?  ";
    cin >> m;

    cout << "Cate coloane?  ";
    cin >> n;
    int X[10] = {0}; // prescurtare, aici se creaza un vector de frecventa cu toate valorile egale cu 0;
    int A[30][30]; // cam asa sunt gandite la leo pe foaie, de obicei e declarat cu 100 sau ceva numar mare

    for ( i = 0 ; i < m; i++) {
        cout << endl;
        for ( j = 0 ; j < n ; j++) {
            A[i][j] = rand() % 30; // generare din intervalul [0;100]
            cout << A[i][j] << '\t';
        }
    }
    // cout << endl;
    // cout << "test" << endl;
    // secventa program (cu vector de frecventa , pt rezolvare cu variabila ""highscore"" nic#0842)

    for ( j = 0 ; j < n ; j++) {
        int X[10] = {0}; 
        max=0;
        cout << endl;
        for ( i = 0 ; i < m ; i++) 
            while (A[i][j] > 0) {
                int c = A[i][j] % 10;
                 if ( c > max) {
                    X[c] = X[c] + 1;
                    // cout << "x[" << c << "] ESTE EGAL CU " << X[c] << endl;; 
                 }
                A[i][j]/=10;
            }
            cout << endl;
            for( p = 9 ; p >= 0; p--) {
            // cout << "X[" << p <<"] = " << X[p] << endl;
            if (X[p] != 0 ) {
                cout << p << " de  " << X[p] << "  ori " << endl; 
                break; // important.
            }
        }
        }
        cout << endl;
     
    }
