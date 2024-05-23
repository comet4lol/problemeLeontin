#include <iostream>

using namespace std;

/*
Fie un vector cu n componente, numere intregi. 
Sa se determine maximul dintre componentele impare ale vectorului. 
Daca nu exista elemente impare se va afisa un mesaj corespunzator.

*/

int main() {
    int n;
    cin >> n;
    int V[n+1];
    bool existaImpare = false;
    for ( int i = 0 ; i < n ; i++) {
        cin >> V[i];
    }
    int max;
    if ( V[0] % 2 == 1 ) {
        max = V[0];
        existaImpare = true;
    }
    else max = 0;
    for ( int i = 0 ; i< n ; i++) {
        if ( (V[i] > max) && (V)[i] % 2 == 1) {
            max = V[i];
        }
        if ( V[i] % 2 == 1 ) existaImpare = true;
    }
    if ( !existaImpare ) cout << "Nu exista impare!";
    else cout << "Max este " << max;
}