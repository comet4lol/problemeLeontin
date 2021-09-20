#include <iostream>
using namespace std;


int main() {
    int n,sumaCifre=0, m=-1,interval;
    cout << "Cat elemente are tabloul nostru?  ";
    cin >> n;
    cout << "Numarul pentru generare prin rand() ?  ";
    cin >> interval;
    int X[n];
    int Y[n];
    for (int i = 0; i < n; i++)
    {
        X[i] = rand() % interval;
        cout << X[i] << "\t";
    }
    

    cout << endl;
    for (int i=0;i<n;i++) {
        int aux = X[i];
        while (aux != 0) {
            sumaCifre += (aux % 10);
            aux /= 10;

        }
        if (sumaCifre % 2 == 0 ) {
            m++;
            Y[m] = X[i];
        }
    }
    for (int i = 0; i < m; i++) {
        cout << Y[i] << '\t';
    }
}