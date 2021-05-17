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
            // cout << "A[" << i << "][" << j << "]= ";
            A[i][j] = rand() % interval;
            // cin >> A[i][j];
        }
    }
    for( i = 0 ; i < M ; i++) {
        for( j = 0 ; j < N ; j++) {
            cout << setw(3) << A[i][j] << "  "; 
        }
        cout << "\n \n";
    }
}