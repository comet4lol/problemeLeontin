/*

Fişierul numere.in conţine un şir de cel mult 106 numere naturale din intervalul [0,99]. Numerele din
fişier sunt separate prin câte un spaţiu.
Se cere să se determine primul şi ultimul număr din şir care conţin cea mai mare cifră ce apare în scrierea
numerelor din fișier. Numerele determinate se afişează pe ecran, în ordinea apariţiei lor în şir, separate printr-un
spaţiu. Dacă nu există două astfel de numere pe poziții distincte, se afişează pe ecran mesajul nu exista.
Proiectați un algoritm eficient din punctul de vedere al timpului de executare și al spațiului de memorie utilizat.
Exemplu: dacă fişierul conţine numerele 34 5 38 30 87 70 11 8 82 25 se afişează pe ecran 38 82,
dacă fişierul conţine numerele 34 5 38 30 87 70 11 8 38 25 se afişează pe ecran 38 38,
iar dacă fişierul conţine numerele 34 5 38 30 se afişează pe ecran nu exista.

*/

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

ifstream f("numere.in");

int main () {
    int n,max1=-1,max2=-1,cmax=-1,c1,c2;

    while (!f.eof()) {
        f >> n;
        c1 = n % 10;
        c2 = n / 10;

        if (c1 == cmax || c2 == cmax ) {
            max2 = n;
        }

        if (c1 > cmax) {
            cmax = c1;
            max1 = n;
            max2 = -1;
        }
        if (c2 > cmax) {
            cmax = c2;
            max1 = n;
            max2 = -1;
        }

    }

    if (max1 == -1 || max2 == -1) cout << "nu exista"; 
    else {
        cout << max1 << " " << max2;
    }


f.close();
}