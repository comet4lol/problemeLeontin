// Creeaza o matrice cu M linii si N coloane in care elementele din ultima linie sunt egale cu nr. coloanelor
// ultima coloana toate elementele sunt egale cu nr. coloanei
// restul elementelor sunt suma dintre elementul din dreapta lui si de sub el

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, j, M, N, interval;

    cout << "Cate linii?=";
    cin >> M;
    cout << endl;

    cout << "Cate coloane?=";
    cin >> N;
    cout << endl;

    int A[M][N];

    for (j = 0; j <= N - 1; j++)
    {
        A[N - 1][j] = j;
    }
    for (i = 0; i < N; i++)
    {
        A[i][N - 1] = N - 1;
    }

    for (i = M - 2; i >= 0; i--)
    {
        for (j = N - 2; j >= 0; j--)
        {
            A[i][j] = A[i + 1][j] + A[i][j + 1];
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
}