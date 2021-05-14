//Se citește un număr. Să se înlocuiască fiecare cifră pară cu successorul ei.
#include <iostream>
using namespace std;

int main()
{
    int numar, cifra, numarFinal, pozitie;
    cout << "Introdu un numar :  ";
    cin >> numar;
    pozitie = 1;
    numarFinal = 0;
    while (numar != 0)
    {
        cifra = numar % 10;
        if (cifra % 2 == 0)
        {
            cifra++;
            numarFinal = numarFinal + pozitie * cifra;
        }
        else
        {
            numarFinal = numarFinal + pozitie * cifra;
        }
        pozitie *= 10;
        numar /= 10;
    }
    cout << "Numarul final este : " << numarFinal;
}