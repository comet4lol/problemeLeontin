//Afișați media aritmetică a numerelor din intervalul[A,B] care au prima cifră egală cu ultima
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b, i, aux, primaCifra, ultimaCifra, suma, k;
    float ma;
    cout << "Cat este a ?  ";
    cin >> a;
    cout << "Cat este b ?  ";
    cin >> b;
    ma = 0;
    suma = 0;
    k = 0;
    for (int i = a; i <= b; i++)
    {
        aux = i;
        ultimaCifra = aux % 10;
        while (aux > 0)
        {
            primaCifra = aux % 10;
            aux /= 10;
        }
        if (primaCifra == ultimaCifra)
        {
            suma += i;
            k++;
        }
    }
    ma = (float)suma / k;
    cout << fixed << setprecision(2) << ma;
}