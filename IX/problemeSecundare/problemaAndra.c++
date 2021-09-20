//Sa se afișeze cel mai mare număr din[A, B] care are număr maxim de divizori
//am presupus ca trebuie numarul care are cea mai mare valorea SI cel mai mare numar de divizori
#include <iostream>
using namespace std;

int main()
{
    int a, b, i, d, numarDivizori, maxDivizori, valoareNumarMaxDivizori;
    cout << "Cat este a?  ";
    cin >> a;
    cout << "Cat este b?  ";
    cin >> b;
    valoareNumarMaxDivizori = a;
    maxDivizori = 2;
    d = 1;
    i = a;
    for (int i = a; i <= b; i++)
    {
        numarDivizori = 0;
        for (int d = 1; d <= i; d++)
        {
            if (i % d == 0)
            {
                numarDivizori++;
            }
        }
        if (numarDivizori >= maxDivizori)
        {
            maxDivizori = numarDivizori;
            valoareNumarMaxDivizori = i;
        }
    }
    cout << "Cel mai mare numar este  " << valoareNumarMaxDivizori << "   cu numarul de divizori :  " << maxDivizori;
}