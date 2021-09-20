#include <iostream>
using namespace std;

int main() {
    int m=-1,n=5;
    int x[n] = { 2,4,5,3,2};
    int y[m];
    for (int i=0;i<n;i) {
        if (x[i] % 2 == 0) {
            m++;
            y[m] = x[i];
        } 
    }
    if (m == -1) {
        cout << "gol";
    }
    else {
        for (int i = 0;i < m;i++) {
            cout << y[i] << endl;
        }
    }
}