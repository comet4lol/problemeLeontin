#include <iostream>

using namespace std;

int main() {

    int N,X=0,C,P=1,Z=0;

    cout << "introdu n=";
    cin >> N;
    cout << "Introdu numarul de cifre pe care vrei sa l adaugi inaintea lui N=";
    cin >> Z;
    
    while (Z>0) {
        cout << "C=";
        cin >> C;
        X=X*10+C;
        Z--;

    }

    int aux = N;
    while (aux > 0) {
        aux = aux / 10;
        P = P * 10;

    }

    N=X*P+N; // X = 123, N = 45, P = 100.
    // N = 123*100 = 12300 + 45 = 12345
    cout << "Numarul final este " << N;
}