//Se citesc numerele a si b. Sa se afle cel mai mare divizor comun
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Cat este A? \n";
    cin >> a;
    cout << "Cat este B? \n";
    cin >> b;
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    cout << "Cel mai mare divizor comun este : " << a;
}