/*
#include <iostream>
#include <string.h>

using namespace std;

int main() {
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
Problema sosu ^^^^^^^^^^^^^ Problema nico mai jos*/

#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char sir[100], aux[100];
    int p;
    cout << "Introdu textul: ";

    cin.getline(sir,100);

    while (strstr(sir, "()") != NULL) 
    {
        p = strstr(sir, "()") - sir;
        strcpy(aux, sir + p + 2);
        strcpy(sir + p, aux);
    }

    while (strstr(sir, "[]") != NULL)
    {
        p = strstr(sir, "[]") - sir;
        strcpy(aux, sir + p + 2);
        strcpy(sir + p, aux);
    }

    while (strstr(sir, "{}") != NULL)
    {
        p = strstr(sir, "{}") - sir;
        strcpy(aux, sir + p + 2);
        strcpy(sir + p, aux);
    }

    if ( strlen(sir) != 0) cout  << "NU";
    else cout << "DA"; 
}
