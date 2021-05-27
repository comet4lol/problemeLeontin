#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n,putere=0;
    cout << "Introdu un numar : ";
    cin >> n;
    if (n==0) {
        cout << "Eroare";
        return 0;
    };
    do {
        putere++;
    } while( !(pow(2,putere)>=n) );
    putere--;
    cout << "Numarul : " << n << " | " << putere; 
}