/*

Fişierul bac.txt conţine, în ordine descrescătoare, cel puţin două şi cel mult 106 numere naturale
din intervalul [0,109], separate prin câte un spaţiu. Se cere să se afişeze pe ecran, în ordine strict
descrescătoare, separate prin câte un spaţiu, numai numerele care apar în fişier de exact două ori.
Dacă nu există niciun astfel de număr, se afișează pe ecran mesajul nu exista. Proiectați un algoritm
eficient din punctul de vedere al memoriei utilizate şi al timpului de executare.
Exemplu: dacă fişierul conţine numerele 100 50 50 50 49 49 36 16 16 12 10 10 9 7 7
pe ecran se afişează, în această ordine, numerele 49 16 10 7
a. Scrieți programul C/C++ corespunzător algoritmului proiectat. (8p.)
b. Descrieți în limbaj natural algoritmul proiectat, justificând eficiența acestuia.

*/

#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.txt");

int main() {
    int x,y,c;

    bool gasit = false;

    f >> x;

    while(!f.eof()) {
        
        c = 1;
        do {
            f >> y;
            if (y == x) c++;
        } while (y == x && (!f.eof()));
        if(c == 2) {
            cout << x << " ";
            gasit = 1;
        }
        x = y;
    }

    if (gasit == 0) {
        cout << "nu exista";
    }

}