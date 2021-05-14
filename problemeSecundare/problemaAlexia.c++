//Se da un numar natural n. Calculati  patratul celui mai mic divizor propriu al sau.
#include <iostream>
using namespace std;

int main()
{
    int n, d, minDivizor;
    cout << "Cat este n ? ";
    cin >> n;
    minDivizor = (n / 2);
    for (int d = 1; d <= (n / 2); d++)
    {
        if (n % d == 0)
        {
            if (d < minDivizor && d != 1)
            {
                minDivizor = d;
            }
        }
    }
    //cout << "Cu cel mai mic divizor propriu: " << minDivizor << endl;
    cout << "Cu patratul celui mai mic divizor  propriu :  " << minDivizor * minDivizor;
}