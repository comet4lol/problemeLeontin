// Se da o cutie care are peretii din sticla, si pe o raza de soare din coltul stanga sus, sa se afiseze pe unde s a plimbat
// raza de soare

#include <iostream>
#include <iomanip>

using namespace std;


int main () {
    int m,n;

    cout << "Introdu numarul de linii= ";
    cin >> m;
    cout << "Introdu numarul de coloane";
    cin >> n;
    int A[m+1][n+1];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
        A[i][j] = 0; }
    }

    int d = 1;
    int pozi = -1;
    int pozj = -1;

    int z = 0;
    bool sem = true;

    while (sem) {
        switch (d) {

    case 1:
        if (pozi == m-1 && pozj == n-1) {
          sem = false;
        }
        if (pozi == m) {
            d = 2;
            pozi--;
            pozj--;
        }
        else if (pozj == n) {
            d = 4;
            pozi--;
            pozj--;
        }
        else {
            pozi++;
            pozj++;
            if (A[pozi][pozj] == 0) {
                    z++;
            A[pozi][pozj] = z; }
        }
        break;

    case 2:
        if (pozi == 0 && pozj == n-1) {
            sem = false;
        }
        if (pozi == -1) {
            d = 1;
            pozi++;
            pozj--;
        } else if (pozj == n) {
            d = 3;
            //cout << "d3 " << pozi << " " << pozj << endl;
            pozi++;
            pozj--;

            
           // cout << "dupa d3 " << pozi << " " << pozj << endl;
    }   else {
        pozi--;
        pozj++;
        if (A[pozi][pozj] == 0) {
            z++;
            A[pozi][pozj] = z;
    }
    }
    break;

    case 3:
        if(pozi==0 && pozj==0) {
            sem = false;
        }
        if (pozi == -1) {
            pozi++;
            pozj++;
            d = 4;
        } else if (pozj == -1) {
            pozi++;
            pozj++;
            d = 2;
    } else {
        pozi--;
        pozj--;
        if (A[pozi][pozj] == 0) {
            z++;
            A[pozi][pozj] = z;
    }
    }
    break;

    case 4:

    if(pozi==m-1 && pozj==0) {
        sem = false;
    }
    if(pozi == m ) {
        d = 3;
        pozi--;
        pozj++;
    } else if (pozj == -1 ) {
    d = 1;
    pozi--;
    pozj++;
    } else {
        pozi++;
        pozj--;
        if (A[pozi][pozj] == 0) {
            z++;
        A[pozi][pozj] = z; }
    }
    break;
    // end switch
    }
}

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
        cout << setw(3) << A[i][j];
    }
    cout << endl;
}
return 0;
}
// © denis sosu nicolas
