#include <iostream>
#include <string.h>

using namespace std;

int main() {
    // Se da un sir de caractere. Pentru fiecare șir, afișați șirul
    // format doar din caracterele aflate pe poziții impare și șirul format
    //  din caracterele aflate pe poziții pare.
    // Cele două șiruri vor fi separate printr-un singur spațiu, pe câte o linie.
    // problema originila , (am omis faptul ca se citesc mai multe siruri ca sa fie mai simplu) : https://www.pbinfo.ro/probleme/2346/paritatesiruri
    
    char sirInitial[100], sirPar[50],sirImpar[50], sirFinal[100] = {0};
    int k = -1, l=-1;
    cout << "Introdu sirul : ";
    cin.getline(sirInitial,100);
    for ( int i = 0 ; i <= strlen(sirInitial); i++) {
        if ( i % 2 == 0 ) {
            k++;
            sirPar[k] = sirInitial[i];
        } else {
            l++;
            sirImpar[l] = sirInitial[i];
        }
    }
    k++;
    sirPar[k] = '\0';
    l++;
    sirImpar[l] = '\0';
    cout << " Rezultat : " << sirImpar << ' ' << sirPar; 
}