#include <iostream>

using namespace std;

int main() {
    // Sa se creeze o matrice N*M ce sa contina sirul lui Fibonacci
    int A[100][100],n,m,x=1,y=0,z;
    cout << "Introdu N : ";
    cin >> n;
    cout << "Introdu M : ";
    cin >> m;
    for ( int i = 0 ; i < n ; i ++) {
        for ( int j = 0 ; j < m ; j++) {
            z = x+y;
            A[i][j] = z;
            x=y;
            y=z;
        }
    }
    for ( int i = 0 ; i < n ; i ++) {
        for ( int j = 0 ; j < m ; j++) {
            cout << A[i][j] << '\t';
        }
        cout << endl;
    }
}