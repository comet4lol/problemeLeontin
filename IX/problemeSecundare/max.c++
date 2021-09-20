#include <iostream>
using namespace std;

main()
{
    int x, y, max = 1;
    cout << "Cat este x ? ";
    cin >> x;
    cout << "Cat este y ? ";
    cin >> y;
    if (x > y)
    {
        max = x;
    }
    if (y > x)
    {
        max = y;
    }
    cout << "Maximul este " << max;
}
//Se citeste un numar de exact 4 cifre , sa se inlocuiasca primele 2 cu ultmele doua
//ex : 1234 => 3412

//Se citeste un numar de exact 3 cifre , sa se precizeze daca suma cifrelor este divizibila cu Z
