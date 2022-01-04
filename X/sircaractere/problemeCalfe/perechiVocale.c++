#include <iostream>
#include <string.h>

using namespace std;

int main() {
    // Se dă un șir de caractere reprezentând o propoziție formată din litere mici ale alfabetului englez și spații.
    // Determinați numărul de perechi de vocale consecutive din propoziție. Se considera vocale aeiou.

    // aceasta familie are doua case 
    // => 4 , adica ea , ie , ou , ua

    char sir[100];
    int n = 0;
    cout << "Introdu sirul de caractere: ";
    cin.getline(sir,100);
    for ( int i = 0 ; i < strlen(sir); i++) {
        if ((sir[i] == 'a') || (sir[i] == 'e') || (sir[i] == 'i') || (sir[i] == 'o') ||  (sir[i] == 'u')) {
            if ((sir[i + 1] == 'a') || (sir[i + 1] == 'e') || (sir[i + 1] == 'i') || (sir[i + 1] == 'o') || (sir[i + 1] == 'u'))
            {
                n++;
            }
        }
    }
    cout << "Numar perechi de vocale : " << n;
}