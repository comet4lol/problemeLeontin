/*

1. Algoritmul alăturat este reprezentat în pseudocod.
S-a notat cu a%b restul împărţirii numărului natural a la numărul
natural nenul b şi cu [c] partea întreagă a numărului real c.
citeşte n (număr natural)
┌repetă
│ c1-n%10; n-[n/10]; c2-n%10
│┌dacă c1>c2 atunci
││ c2-c1; c1-n%10
│└■
│┌cât timp c1<c2 execută
││ scrie c1
││ c2-[c2/2]
│└■
└până când n≤9
a. Scrieţi ce se afișează în urma executării algoritmului dacă se
citeşte numărul 49335. (6p.)
b. Scrieţi trei numere de patru cifre care pot fi citite astfel încât,
pentru fiecare dintre acestea, în urma executării algoritmului,
valoarea afişată să fie 1100. (6p.)
c. Scrieţi programul C/C++ corespunzător algoritmului dat. (10p.)
d. Scrieţi în pseudocod un algoritm, echivalent cu cel dat, înlocuind adecvat structura
cât timp...execută cu o structură repetitivă de alt tip. 

*/

#include <iostream>
#include <cmath>


using namespace std;

int main() {
    int n,c1,c2;

    cin >> n;

    do {
        c1 = n%10;
        n /= 10;
        c2 = n%10;

        if (c1 > c2) {
            c2 = c1;
            c1 = n%10;
        }

        while (c1 < c2) {
            cout << c1;
            c2 = floor(c2 / 2);
        }

    } while (n >= 9);


}