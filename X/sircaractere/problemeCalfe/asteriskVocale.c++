#include <iostream>
#include <string.h>
using namespace std;



int main() {

    // Să se scrie un program care citește un text și inserează după fiecare vocală caracterul *.
    char sir[100], aux[100];
    cout << "Introdu sirul de caractere : " << endl;
    cin.getline(sir, 100);;
    bool avemVocale = false;
    int lungimeSir = strlen(sir);
    for ( int i = 0; i < lungimeSir ; i++) {
        if ((sir[i] == 'a') || (sir[i] == 'e') || (sir[i] == 'i') || (sir[i] == 'o') || (sir[i] == 'u'))  {
            avemVocale = true;
        }
    }
    if (avemVocale) {
    for ( int i = 0 ; i < lungimeSir ; i++) {
        cout << sir[i];
        if ((sir[i] == 'a') || (sir[i] == 'e') || (sir[i] == 'i') || (sir[i] == 'o') || (sir[i] == 'u')) {
           cout << "*";
        }
        
    }
    }
    else cout << "FARA VOCALE";
}