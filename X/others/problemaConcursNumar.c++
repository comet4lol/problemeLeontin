#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("numar.in");
ofstream fout("numar.out");

// numaru introdus trebe sa aiba doar cifre distincte 
// n > 99, n <= 123456789
/*
Fie un număr natural a având n cifre. Scrieţi un program care să determine un număr natural x cu proprietatea că este cel mai mic număr mai mare decât a, care are exact aceleaşi cifre ca şi numărul a.

Date de intrare
Fișierul de intrare numar.in conține două linii:

pe prima linie un număr natural reprezentând valoarea lui n;
pe a doua linie, fără spaţii între ele, n cifre reprezentând numărul a.
*/
int main()
{
    int a, n;
    fin >> n;
    fin >> a;
    fin.close();

    int V[n];

    for (int i = n-1; i>=0; i--) {
        V[i] = a % 10;
        a /= 10;
    }

    bool sem = true;
    for (int i = n-1; i > 0; i--) {
        if (sem && V[i] > V[i-1]) {
            sem = false;
            int aux = V[i];
            V[i] = V[i-1];
            V[i-1] = aux;
        }
    }

    for (int i = 0; i < n; i++) {

    fout << V[i]; }
    fout.close();

    return 0;
}