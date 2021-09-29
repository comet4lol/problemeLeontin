// sa se umple sirul lui fibonacci cu primii m*n termeni din sirul lui fibonacci

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i, j, M, N, x, y;

    cout << "Cate linii?  ";
    cin >> M;
    cout << endl;

    cout << "Cate coloane?  ";
    cin >> N;
    cout << endl;

    int A[M][N];
    x=1;
    y=0;
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            A[i][j] = x+y;
            x = y;
            y = A[i][j];
            // cin >> A[i][j];
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