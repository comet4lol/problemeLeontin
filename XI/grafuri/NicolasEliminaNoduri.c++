#include <iostream>
#include <fstream>
using namespace std;

int X[20];

void elim (int A[20][20], int L, int N) {
    for (int i = L; i <= N; i++) {
        for (int j = 0; j <= N; j++) {
            A[i][j] = A[i+1][j];
        }
    } 

    for (int i = 0; i <= N; i++) {
        for (int j = L; j <= N; j++) {
            A[i][j] = A[i][j+1];
        }
    } 

}

void afisare (int A[20][20], int N) {

    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= N; j++) {
            cout << A[i][j] << " ";
        }
    cout << endl;
    }
}


int main () {
    int T,A[20][20],N;

    ifstream f("adiacenta.txt");
    f >> N;

    for (int i = 0; i<= N; i++) {
        A[0][i] = i;
        A[i][0] = i;
    }
    for (int i = 1; i<= N; i++) {
        for (int j = 1; j<=N; j++) {
            f >> A[i][j];
        }
    }

    afisare(A,N);


    for (int i = 1; N > 1; i++) {
        cout << "Introdu nodul pe care doresti sa il elimini: ";
        cin >> T;

        for (int j = 1; j <= N; j++) {
            if (A[0][j] == T) {
                T = j;
                break;
            }
        }

        elim(A,T,N);
        N--;
        afisare(A,N);

    }
}

/*

#include <iostream>
#include <fstream>
using namespace std;

int X[20];

void elimL (int A[20][20], int L, int N) {
    for (int i = L+1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            A[i-1][j] = A[i][j];
        }
    } 
    for (int i = L+1; i <= N; i++) {
        X[i-1] = X[i];
    }
}

void elimC (int A[20][20], int C, int N) {
    for (int i = 1; i <= N; i++) {
        for (int j = C+1; j <= N; j++) {
            A[i][j] = A[i][j+1];
        }
    } 

}


int main () {
    int T,A[20][20],N;

    ifstream f("adiacenta.txt");
    cout << "N=";
    cin >> N;

    for (int i = 1; i<= N; i++) {
        for (int j = 1; j<=N; j++) {
            f >> A[i][j];
            cout << A[i][j] << " ";
        }
    cout << endl;
    }
    for (int i = 1; i<= N; i++) {
        X[i] = i;
    }

    for (int i = 1; i<= 2; i++) {
        cout << "Introdu nodul pe care doresti sa il elimini: ";
        cin >> T;
        elimL(A,T,N);
        elimC(A,T,N);
        N--;
    }

    for (int i = 1; i <= N-1; i++) {
        for (int j = 1; j <= N; j++) {
            if (A[i][j] == 1) {
                cout << "Muchie intre nodurile " << X[i] << " si " << X[j] << endl;
            }
        }
    }

}

*/