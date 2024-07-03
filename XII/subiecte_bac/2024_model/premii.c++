#include <iostream>
#include <fstream>
using namespace std;


/*

La un concurs se acordă premiile I, al II-lea și al III-lea. Fiecare premiant este recompensat cu câte o
carte, care are un preț egal pentru toți cei cu același premiu. 
Prețurile cărților alese pentru premiile I, al IIlea și al III-lea sunt stabilite 
astfel încât să fie în ordine strict descrescătoare, iar pentru fiecare premiu să
se ia în considerare cel mai mare preț pentru care există suficiente cărți propuse, 
în condițiile precizate.
Fișierul bac.txt conține pe prima linie trei numere naturale din intervalul [1,20], n1, n2 și n3,
reprezentând numărul concurenților care primesc premiile I, al II-lea, respectiv al III-lea, iar pe a doua
linie un șir de cel mult 106 numere naturale din intervalul [10,103], separate prin câte un spațiu,
fiecare număr reprezentând prețul unei cărți propuse pentru premiere.
Se cere să se afișeze pe ecran, separate prin câte un spațiu, în ordine strict descrescătoare, prețurile cărților
alese, corespunzătoare celor trei premii, iar dacă nu există trei astfel de prețuri, se afișează mesajul
nu exista. Proiectați un algoritm eficient din punctul de vedere al timpului de executare.
Exemplu: dacă fișierul conține valorile
3 2 4
500 100 25 100 200 100 20 10 200 100 75 52 52 15 52 20 20 10 30 20 15 100
se afișează pe ecran, în această ordine, numerele 100 52 20.

*/

fstream f("bac.txt");

int main()
{
    int x,y,z,n;
    f >> x;
    f >> y;
    f >> z;
    bool exista=true;
    int X[1001] = {0};
    while (!f.eof()) {
        f >> n;
        X[n]++;
    }
    for ( int i = 1000; i>0;i--) {
        if ( X[i] != 0 ) {

            if (X[i] >= x && x != -1) {
                cout << i << " ";
                x = -1;
            } else if (X[i] >= y && x == -1 && y != -1) {
                cout << i << " ";
                y = -1;
            }

            else if (X[i] >= z && y == -1 && z != -1) {
                cout << i << " ";
                z = -1;
                break;
            }
        }
    }

    if (z != -1) {
        cout << "nu exista";
    }

    return 0;
}