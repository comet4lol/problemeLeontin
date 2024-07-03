/*

Fișierul date.in conține pe prima linie două numere naturale din intervalul [1,106], m și n, iar pe
următoarele două linii numere naturale din intervalul [0,102): pe a doua linie un șir A, de m numere, iar
pe a treia linie un șir B, de n numere. Numerele aflate pe aceeași linie sunt separate prin câte un spațiu.
Se cere să se afișeze pe ecran numărul maxim de perechi de forma (pa,pb) (pa∈[1,m], pb∈[1,n]),
cu proprietatea că termenul de pe poziția pa din șirul A are aceeași valoare cu termenul de pe poziția pb
din șirul B și că fiecare poziție, corespunzătoare șirului A, respectiv șirului B, apare în cel mult o
pereche, ca în exemplu. Proiectați un algoritm eficient din punctul de vedere al timpului de executare.
Exemplu: dacă fișierul conține numerele alăturate, se afișează pe ecran 6
(de exemplu, pentru perechile (1,1), (2,9), (4,2), (5,5), (6,6), (7,7)
sau pentru perechile (1,2), (2,9), (4,1), (5,7), (6,8), (8,5)).
8 9
1 0 4 1 5 3 5 5
1 1 1 7 5 3 5 3 0

*/

#include <iostream>
#include <fstream>


using namespace std;

ifstream f("date.in");

int main() {
    int m,n,s=0;

    f >> m;
    f >> n;

    int A[m], B[n], X[101] = {0}, Y[101] = {0};

    for (int i = 0; i < m; i++) {
        f >> A[i];
        X[A[i]]++;
    }

    for (int i = 0; i < n; i++) {
        f >> B[i];
        Y[B[i]]++;
    }

    for (int i = 0; i <= 100; i++) {
        if (X[i] && Y[i]) {
            s+= min (X[i], Y[i]);
        }
    }

    cout << s;

    f.close();

}