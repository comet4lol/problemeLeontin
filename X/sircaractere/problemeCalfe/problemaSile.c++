#include <iostream>
#include <string.h>

using namespace std;

int main() {
    // Se da un sir de caractere  c si o multime de caractere A. Sa se determine care din elementele 
    // multimii A apar in sirul de caractere c.
    char c[100];
    char A[10];
    char aux[10] = {0};
    cout << "Introdu textul : ";
    cin.getline(c,100);
    cout << "Introdu multimea de caractere : ";
    cin >> A;
    int k = -1;
    for (int i = 0 ; i < strlen(c);i++) {
        char litera = c[i];
        if ( strchr(A,litera) ) {
            k++;
            aux[k] = litera;
        }
    }
    cout << "Elementele care apar sunt : ";
    for ( int i = 0 ; i <= k; i++) {
        cout <<  aux[i] << '\t';
    }
}