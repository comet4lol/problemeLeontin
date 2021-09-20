//Se citeste un numar de exact 3 cifre , sa se precizeze daca suma cifrelor este divizibila cu Z
//ex: 123, sumaCifre = 1+2+3 = 6 , z = 3 => TRUE
#include <iostream>
using namespace std;
main()
{
    int numar, a, b, c, sumaCifre, z;
    cout << "Cat este numarul ?  ";
    cin >> numar;
    cout << "C    at este Z?\n";
    cin >> z;
    a = numar / 1000;
    b = (numar / 100);
    c = (numar / 10) % 10;
    sumaCifre = a + b + c;
    if (sumaCifre % z == 0)
    {
        cout << "Da ";
    }
    else
    {
        cout << "Nu ";
    }
}