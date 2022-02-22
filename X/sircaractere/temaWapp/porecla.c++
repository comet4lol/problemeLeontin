#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char nume[100],prenume[100],porecla[100];
    cout << "Introdu Numele : ";
    cin >> nume;
    cout << "Introdu Prenumele : ";
    cin >> prenume;
    porecla[0] = nume[0];
    porecla[1] = nume[1];
    porecla[2] = prenume[0];
    porecla[3] = prenume[1];
    porecla[4] = '\0';
    cout << "Porecla ta este  : " << porecla;
}