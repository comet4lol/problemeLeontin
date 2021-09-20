// sa se afiseze numerele din intervalul [a,b] care au suma cifrelor un numar prim.
#include <iostream>
using namespace std;

int main()
{
    int a, b, sumaCifre, aux, i, d;
    bool semafor;
    cout << "Cat este a ?";
    cin >> a;
    cout << "Cat este b ?";
    cin >> b;
    for (int i = a; i < b + 1; i++)
    {
        aux = i;
        sumaCifre = 0;
        while (aux != 0)
        {
            sumaCifre += (aux % 10);
            aux = aux / 10;
        }
        semafor = true;
        for (int d = 2; d < (sumaCifre / 2) + 1; d++)
        {
            if (sumaCifre % d == 0)
            {
                semafor = false;
            }
        }
        if (semafor)
        {
            cout << i << "  -- cu suma cifrelor = " << sumaCifre << endl;
        }
    }
}
