/*

Pentru a-si eficientiza activitatea, patronul unei cantine a procurat o masina de gatit sofisticata, care reuseste sa pregateasca un meniu complet intr-o ora, cu costuri minime. Cantina isi desfasoara activitaeta nonstop si primeste multe comenzi. Fiecare comanda are o ora limita la care trebuie sa fie onorata. Dat fiind ca o comanda inseamna pregatirea unui meniu, iar patronul dispune de o singura masina de gatit, care intr-o ora poate pregati un singur meniu, ajutati-l sa aleaga comenzile care ii permit sa obtina un profit cat mai mare, utilizand masina de gatit pentru prepararea comenzilor cu cea mai mare valoare.
Creeaza un program in C++ care are ca fisier de intrare cantina.in ce contine pe prima linie un numar natural n, reprezentand numarul de comenzi primite pe parcursul unei zile, iar pe urmatoarele n linii - perechi de doua numere naturale (ora valoare), separate printr-un spatiu, cu semnificatia: ora este ora limita la care poate onora comanda, iar valoare este valoarea comenzii respective. 
Output: La ecran se va afisa un numar natural, care reprezinta valoarea maxima a comenzilor pe care le poatee onora patronul in ziua respectiva cu ajutorul masinii de gatit.



*/

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100;

int n, t[MAXN + 5], v[MAXN + 5];

int main() {
cin >> n;
for (int i = 1; i <= n; i++) {
cin >> t[i] >> v[i];
}

int ans = 0;
for (int i = 1; i <= n; i++) {
    int maxv = 0, maxid = 0;
    for (int j = 1; j <= n; j++) {
        if (t[j] >= i && v[j] > maxv) {
            maxv = v[j];
            maxid = j;
        }
    }
    if (maxid > 0) {
        ans += maxv;
        t[maxid] = 0;
    }
}

cout << ans << endl;

return 0;
}