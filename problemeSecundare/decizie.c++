// if (cond)
//  i1;
// [else i2;]
//
// daca conditia e diferita de 0 , se executa i1 , altfel se executa i2;
#include <iostream>
using namespace std;

int main()
{
    int x, functie;
    cout << "Cat este x?";
    cin >> x;
    if (x < 5)
        ;
    {
        functie = x * 2;
    }
    if (x >= 5)
    {
        functie = 3 * x;
    }
    cout << functie;
}