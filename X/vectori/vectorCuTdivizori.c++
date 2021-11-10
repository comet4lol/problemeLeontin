#include <iostream>
using namespace std;

int main()
{
    int m, n, i, j, divizori=0,t;
    cout << "Cate linii?  ";
    cin >> m;

    cout << "Cate coloane?  ";
    cin >> n;
    cout << "Cati divizori ? ";
    cin >> t;
    int V[61];
    int k = -1;
    
    int A[30][30];   // cam asa sunt gandite la leo pe foaie, de obicei e declarat cu 100 sau ceva numar mare

    for (i = 0; i < m; i++)
    {
        cout << endl;
        for (j = 0; j < n; j++)
        {
            A[i][j] = rand() % 30; // generare din intervalul [0;100]
            cout << A[i][j] << '\t';
        }
    }
    for ( i = 0 ; i < m ; i++) {
        for ( j = 0 ; j < n ; j++) {
            int aux = A[i][j];
            divizori = 0;
            for ( int d=1 ; d<= aux; d++) {
                if ( aux % d == 0) divizori++;
            }
            if ( divizori >= t) {
                k++;
                V[k] = A[i][j];
            }
        }
    }
    cout << endl << "Avem vectorul : " << endl;
    for ( i = 0 ; i < k ; i ++ ) {
        cout << V[i] << '\t';
    }
}
