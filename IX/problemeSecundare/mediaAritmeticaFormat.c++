#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int suma, i, numar, numarTermeni;
    numarTermeni = 0;
    suma = 0;
    cout << "Pentru a opri introducerea numerelor , introdu cifra 0" << endl;
    while (numar != 0)
    {
        cout << "Introdu un numar: ";
        cin >> numar;
        if (numar == 0)
            break;
        else
        {
            suma += numar;
            numarTermeni++;
        }
    }
    // cout << suma << " " << numarTermeni << endl;
    float medieAritmetica = (float)suma / numarTermeni;
    cout << fixed << setprecision(2) << "Media aritmetica este  " << medieAritmetica; // echivalentul la ma:7:2
}