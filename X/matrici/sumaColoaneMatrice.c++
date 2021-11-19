#include <iostream>

using namespace std;

int main()
{
    // Suma fiecarei valori pentru fiecare coloana dintr-o matrice.
    // cod gabriel
    
    int M, N, i, j, A[M][N];
    cout << "M este:";
    cin >> M;
    cout << "N este:";
    cin >> N;

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            cout << "A[" << i << ',' << j << "]=";
            cin >> A[i][j];
            cout << endl;
        }
    }

    return 0;
}