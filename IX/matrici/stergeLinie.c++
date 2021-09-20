#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int i,j,M,N, interval, L;

    cout << "Cate linii?  ";
    cin >> M;
    cout << endl;
    
    cout << "Cate coloane?  "; 
    cin >> N;
    cout << endl;

    int A[M][N];

    cout << "Din ce interval sa luam valori?  ";
    cin >> interval;
    cout << endl;
    

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

    cout << "Ce linie vrei sa elimini?  ( 1 pana la  " << M  << " ) ?  ";
    cin >> L;
    

    for ( i = L ; i < M ; i++) {
        for( j = 0 ; j < N ; j++) {
            A[i-1][j] = A[i][j];
        }
    }
    --M;
    cout << "Afisare dupa taiere :   " << endl;

    for( i = 0 ; i < M ; i++) {
        for( j = 0 ; j < N ; j++) {
            cout << setw(3) << A[i][j] << "  "; 
        }
        cout << "\n \n";
    }
}