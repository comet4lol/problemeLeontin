#include <iostream>
#include <string.h>

using namespace std;

int main() {
    // Se dă un șir de caractere ce conține litere, cifre, semne de punctuație,
    // spații și alte simboluri ASCII. Cifrele din șir formează numere, scrise în baza 10.
    // Să se determine suma acestor numere.
    // ex : t3ai distr4t de r3v3l1on ?
    // rezultat : 14 (pt ca 3+4+3+3+1 = 14)
    char sir[255]={0};
    int suma = 0;
    cout << "Introdu sirul de caractere: ";
    cin.getline(sir,255);
    cout << "Avem numerele: " << endl;

    for ( int i = 0 ; i < strlen(sir); i++) {
        int reprezentareASCII = int(sir[i]);
        if ( reprezentareASCII >= 48 && reprezentareASCII <= 57) {
            cout << sir[i] << ' ';
            int n = reprezentareASCII - 48;
            suma+=n;
        }
        // ca sa transformam un cod ASCII ce reprezinta o cifra , scadem 48 pentru a extrage numarul in sine.
        // ex : cifra 6 are codul 54, 54 - 48 =  numarul 6
        // ex : cifra 0 are codul 48, 48 - 48 =  numarul 0
    }
    cout << endl << "Rezulta suma : " << int(suma);
}