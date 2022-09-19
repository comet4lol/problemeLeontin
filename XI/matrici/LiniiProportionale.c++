// Se da o matrice cu nr din N sa se afiseze perechile de linii proportionale 
/* Exemplu:

 5 =  3 =  7
 15 = 9 = 21
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main ()

{
    int n,i,j,k,m,val1,val2;
    bool sem;
    cout << "Introdu numarul de coloane N=";
    cin >> n;
    cout << "Introdu numarul de linii M=";
    cin >> m;
    int A[m][n];

    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++)
        {
            //A[i][j] = rand() % 100; 
            cout << "A[" << i << "][" << j << "]=";
            cin >> A[i][j];
            //cout << setw(3) << A[i][j] << " ";
        }
    //cout << endl;
    }

    for (i = 0; i < m-1; i++) {
        for (k = i+1; k < m; k++) {
            sem = 1;

            if (A[i][0] > A[k][0]) val1 = (A[i][0] / A[k][0]) + (A[i][0] % A[k][0]);
            else val1 = (A[k][0] / A[i][0]) + (A[k][0] % A[i][0]);

            for (j = 1; j < n && sem; j++) {

            if (A[i][j] > A[k][j]) val2 = A[i][j] / A[k][j] + A[i][j] % A[k][j];
            else val2 = A[k][j] / A[i][j] + A[k][j] % A[i][j];

               if (val1 != val2) sem = 0;
            }
            if (sem) cout << i << "," << k << endl;
        }
    }
    
    for (int i=0; i<m; i++) {
    for (int j=0; j<n; j++)
    {
        cout << setw(3) << A[i][j] << " ";
    }
    cout << endl;
    }
}