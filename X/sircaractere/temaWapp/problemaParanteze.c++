#include <iostream>
#include <string.h>

using namespace std;

int main() {
    // Se citeste un sir format din paranteze, sa se determine daca se deschid/inchid corect.
    char text[100],aux[100];
    cout << "Introdu textul : ";
    cin.getline(text,100);
    while (strstr(text, "()") != NULL) {
        int poz = strstr(text, "()") - text;
        strcpy(aux, text+poz +2);
        strcpy(text+poz, aux);
    }
    while (strstr(text, "[]") != NULL)
    {
        int poz = strstr(text, "[]") - text;
        strcpy(aux, text + poz + 2);
        strcpy(text + poz, aux);
    }
    while (strstr(text, "{}") != NULL)
    {
        int poz = strstr(text, "{}") - text;
        strcpy(aux, text + poz + 2);
        strcpy(text + poz, aux);
    }
    if ( strlen(text) > 0) cout  << " Paranteze invalide! ";
    else cout << "Corect."; 
}