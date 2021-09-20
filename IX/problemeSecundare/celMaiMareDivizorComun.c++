// Sa se calculeze cel mai mic divizor comun dintre A si B
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
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    cout << "Cel mai mare divizor comun este : " << a;
}