// Sirul lui Fibonacci matrice patrata
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, x, y;

    cout << "Introdu-l pe N: ";
    cin >> n;
    cout << endl;

    int A[n][n];
    x=1;
    y=0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            A[i][j] = x+y;
            x = y;
            y = A[i][j];
        }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
        {
            cout << setw(5) << A[i][j] << "  ";
        }
        cout << "\n \n";
    }
}