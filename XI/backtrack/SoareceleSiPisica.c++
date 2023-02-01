#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int ST[20], k, AS, EV, i, n,p, L[100], C[100], A[20][20], S, j, Smax = -1, Kmax = -1, CS[100], LS[100];

void init() {
ST[k] = 0;
}

void succesor() {
if (ST[k]< 4) {
    ST[k]++;
    AS=1;
    if (ST[k] == 1) {
        L[k] = L[k-1];
        C[k] = C[k-1]+1;
    } else if (ST[k] == 4) {
        L[k] = L[k-1];
        C[k] = C[k-1]-1;
    } else if (ST[k] == 2) {
        C[k] = C[k-1];
        L[k] = L[k-1]+1;
    } else {
        C[k] = C[k-1];
        L[k] = L[k-1]-1;  
    }

} else AS=0;

}

void valid() {
EV=1;

if ((L[k] == 0) || (L[k]==n+1) || (C[k] == 0) || (C[k] == n+1)) EV=0;
else if (A[L[k]][C[k]] == -1) EV=0;


for(i = 1; i<k; i++)
    if ((L[k] == L[i]) && (C[k]==C[i])) EV=0;

}

int solutie() {return (L[k] == n && C[k] == n);} 

void tipar() {
S = 0;
for (i = 1; i <= k; i++) {
    S+= A[L[i]][C[i]];
}

if (S > Smax) {
    Smax = S; Kmax = k;
}

for (int j = 1; j <= k; j++) {
    LS[j] = L[j];
    CS[j] = C[j];
}

}

int main()
{
    ifstream f("traseu.txt");

    f >> n;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            f >> A[i][j];
            cout << A[i][j] << "\t";
        }
    cout << "\n";
    }

    L[1] = 1; C[1] = 1;
    k = 2; init();
    
    while (k > 0) {
        do {succesor();
        if (AS) valid();
        } while(!((!AS)||(AS==EV)));
            if (AS)
                if (solutie()) tipar();
                else {k++; init();}
            else k--;

        }
    if (Kmax > -1) {
        cout << "Soricelul poate aduna maxim " << Smax << " cascaval si mai jos e traseul parcurs de acesta:\n";
        for (i = 1; i<= Kmax; i++)
            //A[LS[i]][CS[i]] = 0;
            cout << LS[i] << " " << CS[i] << endl;
        
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                cout << A[i][j] << "\t";
            }
        cout << "\n";
        }

        } else cout << "Soricelul nu poate ajunge la final";
    } 



/*

// Problema veche - fara vectori

Se da o hala impartita in mai multe incaperi (sub forma unei matrice A[n][n]). Un soricel intra prin coltul stanga sus (adica A[0][0]) 
si acesta treebuie sa culeaga cat mai mult cascaval si sa nu fie mancat de pisici. In fiecare incapere poate fi o pisica sau o bucata de cascaval.
O pisica este reprezentate de numarul -1, iar o bucata de cascaval de numarul 1.

Matricea se citeste dintr-un fisier, care este sub forma aceasta:
3
1   1   1 
1  -1   1 
1  -1   1
Smax = 5


#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int ST[20], k, AS, EV, i, j, n, A[20][20], a=0, b=0, S=1, maxS = -1;

ifstream f("traseu.txt");

void init() {
    ST[k] = 0;
}

void succesor() {
    if (ST[k]< 4) {
        ST[k]++;
        AS=1;}
    else {
    AS=0;
    }
}

void valid(int a, int b) {
    EV = 1;
// 1 - dreapta (a+1) | 2 - stanga (a-1) | 3 - jos (b+1) | 4 - sus - (b-1)
    if (ST[k] == 1) {
        if (b + 1 >= n || A[a][b + 1] != 1) {
            EV = 0;
        }
    } else if (ST[k] == 2) {
        if (b - 1 < 0 || A[a][b - 1] != 1) {
            EV = 0;
        }
    } else if (ST[k] == 3) {
        if (a + 1 >= n || A[a + 1][b] != 1) {
            EV = 0;
        }
    } else {
        if (a - 1 < 0 || A[a - 1][b] != 1) {
            EV = 0;
        }
    }
}

int solutie() {
//cout << a << "\t" << b << endl;
return (a == n-1 && b == n-1);}

void tipar() {
    maxS = max(maxS, S);
}


int main()
{

f >> n;

for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
        f >> A[i][j];
        cout << A[i][j] << "\t";
    }
cout << "\n";
}

k = 1; init();

while (k > 0) {
    do {
        succesor();
        if (AS)
            valid(a, b);
    } while (!((!AS) || (AS == EV)));
    if (AS) {
        if (solutie()) tipar();
        else {
            // 1 - dreapta (a+1) | 2 - stanga (a-1) | 3 - jos (b+1) | 4 - sus - (b-1)
            if (ST[k] == 1) {
                b++;
            } else if (ST[k] == 2) {
                b--;
            } else if (ST[k] == 3) {
                a++;
            } else {
                a--;
            }
            S++;
            A[a][b] = -1;
            k++;
            if (solutie()) tipar();
            init();
        }
    } else {
        k--;
        if (k > 0) {
            if (ST[k] == 1) {
                b--;
            } else if (ST[k] == 2) {
                b++;
            } else if (ST[k] == 3) {
                a--;
            } else {
                a++;
            }
        S--;
        }
    }
}

cout << maxS;

}

*/