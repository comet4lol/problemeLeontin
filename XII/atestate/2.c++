
/*
Se considera fisierul A.TXT care contine mai multe randuri de text. 
Fiecare rand este alcatuit din cuvinte scrise numai cu litere mici, 
separate prin unul sau mai multe spatii. 
Sa se scrie programul care modifica fisierul A.TXT astfel incat 
fiecare cuvant sa inceapa cu majuscula, restul ramanand nemodificate.

*/

#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

ifstream f("a.txt");
ofstream g ("b.txt");


int main() {
    char a[255];
    f.getline(a,255);
    a[0] = toupper(a[0]);
    int n = strlen(a);
    for( int i = 0; i < n; i++) {
        if ( isalpha(a[i]) && (a[i-1]) == ' ') {
            a[i] = toupper(a[i]);
        }
    }
    g << a;
}