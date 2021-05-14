//Se citeste un numar de exact 4 cifre , sa se inlocuiasca primele 2 cu ultmele doua
//ex : 1234 => 3412

#include <iostream>
using namespace std;

main()
{
    int numar, a, b, c, d;
    cout << "Cat este numarul?  ";
    cin >> numar;
    d = numar % 10;
    c = (numar / 10) % 10;
    b = (numar / 100) % 10;
    a = numar / 1000;
    cout << c;
    cout << d;
    cout << a;
    cout << b;
}