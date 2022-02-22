// Se citește numele și prenumele unei persoane. Afișați porecla. Primele doua litere din nume și primele din Prenume.
// La mine este Lule. Ex. OLar ADriana >olad

#include <iostream>
#include <string.h>

using namespace std;

int main () {
    char sir[50];
    cout << "Nume Prenume:\n";
    cin.getline(sir, 50);

    cout << sir[0] << sir[1];

    int i = strstr(sir," ")-sir;
    strcpy (sir,sir+i+1);

    cout << sir[0] << sir[1];
} 
