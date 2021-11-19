#include <iostream>
using namespace std;

int cmmdc(int x, int y) {
    while ( x != y) {
        if (x > y) {
            x = x - y;
        } else y = y-x;
    } 
    return x;
}

int main() {
    int a,b,rezultat,durataRiff = 0;
    int n = 5;
    int pian[n];
    for ( int i = 0 ; i < n ; i ++ ) {
        cin >> pian[i];
        cout << " ";
    }
    for ( int i = 0 ; i < n-1; i++ ) {
        int divComun = cmmdc(pian[i],pian[i+1]);
        pian[i] = divComun;
        pian[i+1] = divComun;
    }
    for ( int i = 0 ; i < n ; i ++ ) durataRiff+=pian[i];
    cout << endl << durataRiff;
}