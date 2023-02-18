// Ai un cal pe o tabla de sah. E posibil sa mearga pe toate pozitile fara sa treaca prin aceeasi de 2 ori? Backtrack

#include <iostream>
#include <cmath>
using namespace std;

int ST[100], k, AS, EV, i, n,c,A[20][20],t = 1, x[100] = {1}, y[100] = {1};

void init() {
ST[k] = 0;
}

void succesor() {

if (ST[k]< 8) {
    ST[k]++;
    AS=1;
    if (ST[k] == 1) {
        x[k] = x[k-1]-1; // x = i
        y[k] = y[k-1]-2; // y = j
    } else if (ST[k] == 2) {
        x[k] = x[k-1]-2;
        y[k] = y[k-1]-1;
    } else if (ST[k] == 3) {
        x[k] = x[k-1]-2;
        y[k] = y[k-1]+1;
    } else if (ST[k] == 4) {
        x[k] = x[k-1]-1;
        y[k] = y[k-1]+2;
    } else if (ST[k] == 5) {
        x[k] = x[k-1]+1;
        y[k] = y[k-1]+2;
    } else if (ST[k] == 6) {
        x[k] = x[k-1]+2;
        y[k] = y[k-1]+1;
    } else if (ST[k] == 7) {
        x[k] = x[k-1]+2;
        y[k] = y[k-1]-1;
    } else if (ST[k] == 8) {
        x[k] = x[k-1]+1;
        y[k] = y[k-1]-2;
    }
} else {
    AS=0;
    
}

}

void valid() {
EV=1;
if(A[x[k]][y[k]] != 0) EV=0;

if (x[k] > n || x[k] < 1) EV=0;
if (y[k] > n || y[k] < 1) EV=0;

    if (EV) {
    A[x[k]][y[k]] = t;
    t++;
    }
}

int solutie() {
    return (k == (n*n)-5);}

void tipar() {

    for (i = 1; i <= n; i++) {
        for (int j = 1; j<= n; j++) {
            cout << A[i][j] << "\t";
        }
    cout << endl;
    }

cout << endl;
}

int main()
{
    cout << "n= " ;
    cin >> n;
    x[0] = 2;
    y[0] = 3;
    for (i = 1; i <= n; i++) {
        for (int j = 1; j<=n; j++) {
            A[i][j] = 0;
        }
    }

    k = 1; init();

    while (k > 0) {
        do {succesor();
        if (AS) valid();
        } while(!((!AS)||(AS==EV)));
            if (AS)
                if (solutie()) tipar();
                else {k++; init();} 
            else {
                k--;
                A[x[k]][y[k]] = 0;
                t--;
            }

        }

    }