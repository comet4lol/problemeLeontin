/*

Două numere a și b sunt numite generatoare ale unui număr natural n dacă a∙b+[a/b]=n, unde s-a notat
cu [c] partea întreagă a numărului real c.
Subprogramul generatoare are un singur parametru, n, prin care primește un număr natural
(n[2,109]). Subprogramul afișează pe ecran toate perechile distincte de numere naturale cu proprietatea
că sunt generatoare ale lui n și că primul număr din pereche este par. Numerele din fiecare pereche sunt
separate prin simbolul minus (-), iar perechile sunt separate prin câte un spațiu. Dacă nu există astfel de
perechi, se afișează pe ecran mesajul nu exista. Scrieți definiția completă a subprogramului.
Exemplu: dacă n=2020 se afișează pe ecran
2-1010 4-505 10-202 20-101 96-21 200-10 606-3 808-2 1010-1

*/

#include <iostream>
#include <cmath>

using namespace std;

void generatoare(int n) {
    bool exista = false;

    // Parcurgem toate valorile posibile pentru a, începând de la 2 (primul număr par) și până la n,
    // deoarece ab nu poate fi mai mare decât n pentru a fi generatoare ale lui n.
    for (int a = 2; a <= n; a += 2) { // a este par, deci incrementăm cu 2
        // Calculăm b bazându-ne pe formula dată: ab + [a/b] = n
        // Rearanjăm formula pentru a afla b: b = (n - [a/b]) / a
        // Dar trebuie să testăm explicit fiecare valoare posibilă pentru b și să verificăm condiția
        for (int b = 1; b*a <= n; ++b) {
            if (a*b + floor(a / b) == n) {
                cout << a << "-" << b << " ";
                exista = true;
            }
        }
    }

    if (!exista) {
        cout << "nu exista";
    }
}

int main() {
    int n;
    cout << "Introduceti n: ";
    cin >> n;
    generatoare(n);
    return 0;
}