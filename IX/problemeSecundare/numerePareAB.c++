//Sa se afiseze toate nr pare din intervalul AB
#include <iostream>
using namespace std;

int main()
{
    int a, b, i;
    cout << "Cat este a?\n";
    cin >> a;
    cout << "Cat este b?\n";
    cin >> b;
    cout << "Numere pare sunt: \n";
    for (int i = a - 1; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << "\n";
        }
    }
}