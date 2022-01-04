#include <iostream>
#include <string.h>

using namespace std;

int main() {
    // Se citește un text de maxim 256 caractere. Să se afișeze textul după aplicarea Cifrului Caesar.

    // Cifrul Caesar este o metodă de criptare în care fiecare literă este înlocuită
    // cu o altă literă ce se află la un număr fix de poziții după aceasta în alfabet.

    // se va citi numarul de pozitii cu care sa avansam in alfabet.

    // OBS: cazuri particulare ;)

    // cine rezolva problema cu cateva cazuri particulare e meserias

    // indicii cazuri particulare : xyz , semne de punctuatie. 

    char sir[255],sirCodatCezar[255];
    int sirCodatASCII[255] = {0};
    int numarPozitii;
    cout << "Introdu sirul de caractere: ";
    cin.getline(sir,255);
    cout << "Introdu numarul de pozitii cu care sa avansam in alfabet: ";
    cin >> numarPozitii;
    int i;
    for (  i = 0 ; i < strlen(sir); i++) {
        char litera = sir[i];
        int reprezentareASCII = int(litera);
        if (reprezentareASCII == 32 || reprezentareASCII == 54 || reprezentareASCII == 56) { // nu fac pt fiecare semn de punctuatie ca stau pana maine
            sirCodatASCII[i] = reprezentareASCII;
            continue;
        }
        
        int aux = reprezentareASCII + numarPozitii;
        int surplusPesteZ = 0;

        while ( aux > 122) {
            surplusPesteZ++;
            aux--;
        }
        if ( surplusPesteZ > 0) {
            aux = 96 + surplusPesteZ; /* codul ASCII pentru a - 1  */
        }
        sirCodatASCII[i] = aux;
    }
    cout << "Sirul codat este: ";
    for ( i = 0 ; i < strlen(sir); i++) {
        sirCodatCezar[i] = char(sirCodatASCII[i]);
        cout << sirCodatCezar[i];
    }
}