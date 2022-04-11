#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    // Se citesc un sir de caractere ce contine doar litere si cifre.
    // Sa se afiseze nr de litere mici,mari si cifre.
    char sir[100];
    cout << "Introdu textul : ";
    cin.getline(sir,100);
    int litereMari = 0 , litereMici = 0, cifre = 0;
    for ( int i = 0 ; i < strlen(sir);i++) {
        if (isalpha(sir[i])) {
            if (isupper(sir[i])) litereMari++;
            else litereMici++;
        } else if (isdigit(sir[i])) cifre++;
    }
    cout << "Litere mari : " << litereMari << endl << "Litere mici : " << litereMici << endl << "Cifre : " << cifre;
}
