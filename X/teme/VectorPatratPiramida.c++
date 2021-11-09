// Se citeste un vector cu N la puterea 2 componente.
// Sa se costruiasca matricia patrata astfel 
// V[0] V[2]  V[5]
// V[1] V[4]
// V[3]

#include <iostream>

using namespace std;

int main()
{
    int n,k,i=0,j=0,interval;
    cout << "Cat este N? " << endl;
    cin >> n;
    cout << "Numarul pentru generare prin rand() ?  ";
    cin >> interval;
    cout << endl;
    int X[n*n];
    for (int k = 0; k < n*n ; k++) {
        X[k] = rand() % interval;
        cout << X[k] << "\t";
    }
    cout << endl;
    cout << endl;
    cout << endl;
    int A[n*n][n*n]; // matrice patrata
    for( int i = 0 ; i < n; i+=2) {
        for ( int j = 0; j < n; j+=1) {
            
            //cout << " A[" << i << "] " << "[" << j << "]" << "\t";
            A[i][j] = n-i;
        }
        cout << endl;
    }

}