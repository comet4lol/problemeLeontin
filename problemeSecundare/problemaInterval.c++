#include <iostream>
using namespace std;

int main()
{
    int a, b, i;
    cout << "Cat este a? ";
    cin >> a;
    cout << "Cat este b ";
    cin >> b;
    if (a % 2 == 1)
        a++;
    for (int i = a; i < b + 1; i += 2)
    {
        cout << i << endl;
    }
}