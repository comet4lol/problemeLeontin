// Sa se af. perechiile de coloane identice
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i, j, l, M, N, interval;

    cout << "Cate linii?=";
    cin >> M;
    cout << endl;

    cout << "Cate coloane?=";
    cin >> N;
    cout << endl;

    cout << "Din ce interval sa luam valori?=";
    cin >> interval;
    cout << endl;

    int A[M][N];
    bool sem=true;

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            A[i][j] = rand() % interval;
        }
    }
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            cout << setw(3) << A[i][j] << "  ";
        }
        cout << "\n \n";
    }

    for (i = 0; i < N-1; i++) {
        for (j = i+1; j < N; j++) {
            sem = true;
            for (l = 0; l < M; l++) {
                if ( A[l][i] != A[l][j] ) {
                    sem = false;
                }
            }
            if (sem)
            {
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }
}