//Se da o matrice. Sa se af perechiile de linii identice.
#include <iostream>

using namespace std;

int main()
{
    int i, j, k, M, N, interval;

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

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            // cout << "A[" << i << "][" << j << "]= ";
            A[i][j] = rand() % interval;
            // cin >> A[i][j];
        }
    }
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            cout << A[i][j] << "\t";
        }
        cout << "\n \n";
    }
    cout << "\n";
    int sem;
    for (i=0; i<= M-2; i++) {
        for (j=i+1; j<=M-1; j++) {
            sem=1;
            for(k=0; k<=N-1 ;k++) {
                if(A[i][k] != A[j][k]) {sem=0;}
            }
            if (sem)
            {
                cout << i << "," << j << "\n";
            }
        }
    }

}