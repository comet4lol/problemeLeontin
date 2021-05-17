#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int i,j,M,N, interval , L,produsul = 1, contor=0 , C, suma=0;

    cout << "Cate linii?  ";
    cin >> M;
    cout << endl;
    
    cout << "Cate coloane?  "; 
    cin >> N;
    cout << endl;

    cout << "Din ce interval sa luam valori?  ";
    cin >> interval;
    cout << endl;

    int A[M][N];

    for( i = 0 ; i < M; i++) {
        for ( j = 0 ; j < N ; j++) {
            A[i][j] = rand() % interval;
        }
    }
    for( i = 0 ; i < M ; i++) {
        for( j = 0 ; j < N ; j++) {
            cout << setw(3) << A[i][j] << "  "; 
        }
        cout << "\n \n";
    }
    for ( i = 0 ; i < M ; i++) {
        for ( j = 0 ; j < N ; j++) {
            if ( (i == 0 || i == M-1) || ( j == 0 || j == N-1) ) cout << A[i][j] << "\t";
              
        }
    }

    cout << "A carei linii vrei produsul  ( 0 pana la  " << M  << " ) ?  ";
    cin >> L;
    cout << endl;

    for ( i = 0; i < M ; i++) {
        produsul *= A[L][i];
    } 
    cout << "Produsul este : " << produsul;
    cout << endl;

    cout << "Pe care coloana vrei sa afli numarul de elemente pare  ( 0 pana la  " << N  << " ) ?  ";
    cin >> C;
    cout << endl;

    for ( j = 0; j < N ; j++) {
        if (A[j][C] % 2 == 0) contor++;
    }
    cout << "Numarul de elemente pare este : " << contor;
}