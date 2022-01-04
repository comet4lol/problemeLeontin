// problema pentru gabi, schimba c1 cu c2

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int aux,i,j,M,N, interval,c1,c2;

    cout << "C1=";
    cin >> c1;

    cout << "C2=";
    cin >> c2;

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
            cout << setw(3) << A[i][j] << "  "; 
        }
        cout << "\n \n";
    }
    cout << "Dupa:" << endl;

  for ( i = 0 ; i < M; i++) {
  aux = A[i][c1];
  A[i][c1] = A[i][c2];
  A[i][c2] = aux;
}

    for( i = 0 ; i < M ; i++) {
        for( j = 0 ; j < N ; j++) {
            cout << setw(3) << A[i][j] << "  "; 
        }
        cout << "\n \n";
    }
}