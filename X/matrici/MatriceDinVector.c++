// Se da un vector cu N*N componente, sa se formeze o matrice in care elementele sunt asezate in scara
/* Exemplu:
n = 3

0 2 5
1 4 7
3 6 8 

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main ()

{
    int n,i,j,S=0;

    cout << "Introdu numarul de elemente din vectorul N=";
    cin >> n;
    int v[n*n], A[n][n];

    for (i = 0; i < n*n; i++)
    {
        //v[i] = rand() % x; 
        v[i] = i;
    }

    int k = 0, m = 0;
    while (S < n*n) {
       i = k; 
       j = m;
       do {
           A[i][j] = v[S];
           S++;
           i--;
           j++;
       } while (j <= k && S < n*n);
       if (k < n-1) k++;
       else m++;
    }
    for (int i=0; i<n; i++)
    {
    for (int j=0; j<n; j++)
    {
        cout << setw(3) << A[i][j] << " ";
    }
    cout << endl;
    }

}