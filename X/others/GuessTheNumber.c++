#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int n = 50, r = 1, limitL = 0, limitH = 100;

    //system("Color 09");

    cout << "Jocul a inceput, alege un numar dintre 0-100. Te rog sa specifici de cate ori este necesar daca numarul tau este mai mare sau mai mic decat numarul de pe ecran.";
    cout << "\nEste numarul tau " << n << "? Raspunde cu: (0) daca da, cu (1) daca numarul tau este mai mic si cu (2) daca numarul tau este mai mare: ";
    while (r)
    {
        cin >> r;

        switch (r)
        {
        case 0:
            //system("Color 0A");
            cout << "eey am ghicit numaru";
            break;
        case 1:
            limitH = n - 1;
            /*if (n < 50) n = n / 2; 
            else n -= (100-n)/4; */
            n = limitL + ((limitH - limitL) / 2);
            cout << "\nEste numarul tau " << n << "? Raspunde cu: (0) daca da, cu (1) daca numarul tau este mai mic si cu (2) daca numarul2 tau este mai mare: ";
            break;
        case 2:
            limitL = n + 1;
            /* if (n > 50) n = (n+100)/2;
            else if (n % 2 == 0) n += n/2;
            else n += (n+1)/2; */
            n = limitL + ((limitH - limitL) / 2);
            cout << "\nEste numarul tau " << n << "? Raspunde cu: (0) daca da, cu (1) daca numarul tau este mai mic si cu (2) daca numarul tau este mai mare: ";
            break;
        default:
            cout << "introdu un numar intre 0 si 2 bai";
        }
    }
}