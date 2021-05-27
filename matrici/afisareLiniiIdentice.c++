//Se da o matrice sa se afiseze perechiile de linii identice.
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int i,j,M,N, interval;

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
            // A[i][j] = rand() % interval;
            cout << "A[" << i << "][" << j << "]= ";
            cin >> A[i][j];
        }
    }
    for( i = 0 ; i < M ; i++) {
        for( j = 0 ; j < N ; j++) {
            cout << setw(3) << A[i][j] << "  "; 
        }
        cout << "\n \n";
    }
    cout << endl;
    bool sem;

    cout << "Perechiile afisate sunt : " << endl;
    for( i = 0 ; i < M-2 ; i++) {
        for( j = i+1 ; j < N-1 ; j++) {
            bool sem = true;
            for ( int k = 0 ; k <= N-1 ; k++) {
                if (A[i][k] != A[j][k]) {
                    sem = false;
                }
            }
            if (sem) cout << i <<  "  " << j;
        }
    }
    cout << sem;
}