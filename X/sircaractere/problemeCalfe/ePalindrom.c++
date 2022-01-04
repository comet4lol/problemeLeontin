#include <iostream>
#include <string.h>
using namespace std;


int main() {
    // Se citeste un cuvant, sa se afiseze "Da" daca este palindrom, altfel, sa se afiseze "Nu".
    // palindrom = cuvant ce este identic cu inversul sau
    char cuvant[100],inversCuvant[100];
    cout << "Introdu cuvant: ";
    cin.getline(cuvant,100);
    int k = 0;
    for (int i = 0, k = strlen(cuvant) - 1; i < strlen(cuvant); i++, k--)
    {
        inversCuvant[k] = cuvant[i];
    }
    bool palindrom = true;
    for (int i = 0; i < strlen(cuvant) - 1; i++)
    {
        if (cuvant[i] != inversCuvant[i])
            palindrom = false;
    }
    if (palindrom)
    {
        cout << "Da";
    }
    else
        cout << "Nu";
    cout << endl;
}
