// Sir de forma: a1b2c3
// rezultat: abbccc
#include <iostream>
#include <string.h>

using namespace std;

int main () {
    int k=-1;
    char s[100], aux[100];

    cout << "Introdu sirul: ";
    cin.getline(s, 100);

    for (int i = 1; i<strlen(s); i+=2) {

        for (int j = 1; j <= s[i]-48; j++) {
        k++;
        aux[k] = s[i-1];    
        }

    }
    aux[k+1] = '\0';

    cout << aux;
}