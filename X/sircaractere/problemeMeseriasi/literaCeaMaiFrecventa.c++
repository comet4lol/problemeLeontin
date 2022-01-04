#include <iostream>
#include <string.h>

using namespace std;

int main() {
    // Să se scrie un program care citește un șir de caractere și afișează litera mică 
    // cel mai des întâlnită în șir.

    
    char sir[255];
    int vectorFrecventa[128] = {0};
    // se poate declara si cu 122 , verifica tabel ascii de ce.

    cout << "Introdu sirul de caractere: ";
    cin.getline(sir,100);

    for ( int i = 0 ; i < strlen(sir) ; i++) {
        char litera = sir[i];
        if ( islower(litera) ) {
            int codASCII = int(litera);
            vectorFrecventa[codASCII]++;
        }
    }


    int contorFrecventa = vectorFrecventa[0];
    int celMaiFrecventCodASCII = 0;

    for ( int i = 0 ; i < 128 ; i++) {
        if ( vectorFrecventa[i] > contorFrecventa) {
            contorFrecventa = vectorFrecventa[i];
            celMaiFrecventCodASCII = i;
        }
    }

    char literaCeaMaiFrecventa = char(celMaiFrecventCodASCII);

    cout << "Codul ASCII cel mai des intalnit : " << literaCeaMaiFrecventa << "   aparand de  " << contorFrecventa << "  ori";


    // folosim vector de frecventa
    // adica, in loc sa stocam cifrele (0...9) ne folosim de fiecare valoare posibila a codului ASCII
    // apoi, dupa ce am parcurs sirul de caractere avem un vector ce contine coduri ASCII si nr lor de aparitii.
    // => gasim cel codul ascii cu cele mai multe aparitii , apoi decodificam codul ASCII inapoi in litera.
}