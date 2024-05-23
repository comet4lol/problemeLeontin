#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int n,i,j,k,m;
    bool sem;
    cout << "N=";
    cin >> n;
    cout << "M=";
    cin >> m;
    int A[m][n];

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "A[" << i << "][" << j << "]=";
            cin >> A[i][j];
        }
    }

    int liniiegale = 0;
    for (i = 0; i < m-1; i++) {
        for (k = i+1; k < m; k++) {
            sem = 1;
            for (j = 0; j < n && sem; j++) {
                if (A[i][j] != A[k][j]) sem = 0;
            }
            if (sem) {
                liniiegale++;
                cout << i << "," << k << endl;
            }
        }
    }

    cout << "Numarul de linii egale este: " << liniiegale << endl;

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++)
        {
            cout << setw(3) << A[i][j] << " ";
        }
        cout << endl;
    }
}