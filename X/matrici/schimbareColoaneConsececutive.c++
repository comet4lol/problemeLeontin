
#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main () {
 int M,N,i,j,aux,Z;

 cout << "M=";
 cin >> M;
 cout << "N=";
 cin >> N;

 int A[M][N];

 for (i = 0; i<M; i++) {
    for (j = 0; j<N; j++) {
        A[i][j] = rand() % 124;
        cout << A[i][j] << "\t"; }
    cout << endl; }

    if (N % 2 == 0)
        Z = N-1;
         else
        Z = N-2;

    while (Z > 0) {
        for (i = 0; i < M; i++) {
            aux = A[i][Z];
            A[i][Z] = A[i][Z-1];
            A[i][Z-1] = aux;
        }
        Z = Z - 2;
    }
    cout << "\n New: \n";
     for (i = 0; i<M; i++) {
    for (j = 0; j<N; j++) {
        cout << A[i][j] << "\t"; }
    cout << endl; }

    int V[M+N], K=-1;

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            aux = A[i][j];
            int pare = 0;
            while (aux > 0) {
                if (aux % 2 == 0) pare++;
                aux /= 10;
            }
            if (pare >= 2) {
                K++;
                V[K] = A[i][j];
            }
        }
    }
    cout << "Vector:\n";
    for (i = 0; i <= K; i++)
        cout << V[i] << " ";

  return 0;
}
