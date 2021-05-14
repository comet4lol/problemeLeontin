//Să se afișeze toate numerele din intervalul [a,b] care sunt divizibile cu 2.
#include <iostream>
using namespace std;

int main()
{
    int a, b, i;
    cout << "Cat este a ?  ";
    cin >> a;
    cout << "Cat este b ?  ";
    cin >> b;
    for (int i = a; i <= b; i++)
    {
        if (i % 2 == 0)
            cout << i << endl;
    }
}