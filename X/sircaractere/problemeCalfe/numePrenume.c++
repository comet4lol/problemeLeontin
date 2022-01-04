#include <iostream>
#include <string.h>

using namespace std;


int main() {
    // Să se scrie un program care citeşte de la tastatură  numele și prenumele unei persoane 
    // și construiește un al treilea șir de caractere, care va conține consoanele din prenumele 
    // citit dispuse în ordinea în care apar în prenume, urmate de exact un spațiu și de numele citit.
    int i;
    char nume[100],prenume[100],consoane[21],numePrenume[100] = {};
    cin.getline(nume,100);
    cin.getline(prenume,100);
    int k = -1;
    for ( i = 0 ; i < strlen(prenume); i++) {
        char litera = prenume[i];  
        if (litera == 'a' || litera == 'e' || litera == 'i' || litera == 'o' || litera == 'u') {
            continue;
        } else {
            k++;
            consoane[k] = litera;
        }
    }
    for ( i = 0; i < strlen(consoane) ;i++) {
        numePrenume[i] = consoane[i];
    }
    char aux[100];
    strcat( aux, numePrenume + k);
    strcat( numePrenume + k + 1, aux);
    k++;
    numePrenume[k] = ' ';
    k++;
    for ( int l=0; l < strlen(nume); l++) {
        numePrenume[k] = nume[l];
        k++;
    }
    numePrenume[k] = '\0';
    cout << numePrenume;
}