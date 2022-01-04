#include <iostream>
#include <string.h>

using namespace std;

/*
Se citeste un text. Sa se afiseza :
a) doar literele mari
b) doar cifrele 
c) sa se prelucreze textul a.i. prima si ultima litera a fiecarui cuvant sa fie mare iar restu mici
*/

int main() {
    char text[255];
    cout << "Introdu textul: ";
    cin.getline(text,255);
    // a) doar literele mari
    cout << endl << "Doar literele mari: ";
    for ( int i = 0 ; i < strlen(text);i++) {
        if ( isupper(text[i]) ) cout << text[i] << ' ';
    }
    // b) doar cifrele
    cout << endl << "Doar cifrele: ";
    for ( int i = 0 ; i < strlen(text);i++) {
        if ( isdigit(text[i]) ) cout << text[i] << ' ';
    }
    // c) sa se prelucreze textul a.i. prima si ultima litera a fiecarui cuvant sa fie mare iar restu mici
    cout << endl << "Text modificat: ";
    char *bucata = strtok(text, " "); 
    while (bucata != NULL)
    {
        // transformam toate literele in litere mici
        for ( int i = 0 ; i < strlen(bucata);i++) {
                bucata[i] = tolower(bucata[i]);
        }
        // transformam primul si ultimul caracter in litere mari
        bucata[0] = toupper(bucata[0]);
        bucata[strlen(bucata)-1] = toupper(bucata[strlen(bucata)-1]);
        // afisam cuvantul
        cout << bucata << ' ';
        bucata = strtok(NULL, " ");
    }
}