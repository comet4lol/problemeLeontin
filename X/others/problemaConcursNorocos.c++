#include <iostream>
using namespace std;

// Se spune despre numărul natural nenul n că este norocos dacă numărul n2 se poate scrie ca suma a n numere naturale nenule consecutive. De exemplu, 7 este norocos, deoarece 72=4+5+6+7+8+9+10.

int esteNorocos(int n)
{
    int S = 0, nrSters = 1, nrAdaugat = 1;
    while (nrSters < n*n)
    {
        if (S < n*n)
        {
            S += nrAdaugat;
            nrAdaugat++;
        }
        else if (S == n*n) {
            // Debug lolcout << "S = " << S << " nrAdaugat = " << nrAdaugat << "  nrSters = " << nrSters << "  n = " << n << endl; 
            return true; }
        else
        {
            S -= nrSters;
            nrSters++;

        }
    }
    return 0;
}

int norocoase(int a, int b)
{
    while (a <= b)
    {
        if (esteNorocos(a))
            cout << a << "  ";
        a++;
    }
    return 0;
}
int main()
{
    int a, b;
    cout << "Introdu intervalul [a,b]: ";
    cin >> a >> b;
    norocoase(a, b);
}
