#include <iostream>
#include <string.h>
using namespace std;

int main() {
    // Se citesc doua siruri de caractere si P
    // Sa se verifice daca ultimele P caractere sunt identice
    // ( adica daca rimeaza cele doua siruri de caractere)
    // ex: p = 2 ,  cocaina , faina => adevarat
    char x[100],y[100];
    bool rimeaza = true;
    int p;
    cout << "Introdu primul sir : ";
    cin >> x;
    cout << "Introdu al doilea sir : ";
    cin >> y;
    cout << "Introdu P : ";
    cin >> p;
    int i = strlen(x), j = strlen(y);
    while ( i > 0 && j > 0 && p > 0) {
        if ( x[i] != y[j]) rimeaza = false;
        p--;
        i--;
        j--;
    }
    if (rimeaza) cout << "Rimeaza!";
    else cout << "Nu rimeaza!";
}