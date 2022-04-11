#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char sir[50],aux[50];
    cout << "Introdu textul: ";
    cin.getline(sir, 50);

    for ( int i = 0 ; i < strlen(sir);i++) {
        if ( int(sir[i]) == 32) {
            strcpy(aux, sir+i+1);
            strcpy(sir+i,aux);
        }
    }
    cout << "Rezultat : " << sir;
}
