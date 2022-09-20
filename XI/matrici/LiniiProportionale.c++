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

    for (i = 0; i < m-1; i++) {
        for (k = i+1; k < m; k++) {
            sem = 1;
            for (j = 1; j < n && sem; j++) {

               if ((float) A[i][0] / A[k][0] != (float) A[i][j] / A[k][j]) sem = 0;
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