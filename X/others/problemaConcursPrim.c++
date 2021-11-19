#include <iostream>
using namespace std;

int ePrim(int x)
{
    for (int i = 2; i < x / 2; i++)
        if (x % i == 0)
            return false;
    return true;
}

// Scrieţi definiția completă a unui subprogram C++ i_prim care primește prin singurul său parametru, n, un număr natural cu cel mult 9 cifre și returnează diferența minimă p2-p1 în care p1 şi p2 sunt // numere prime și p1≤n≤p2.

int i_prim(int n)
{
    int p2 = n;
    int p1 = n;
    bool prim1 = true;
    bool prim2 = true;
    while (prim1)
    {
        if (ePrim(p1))
            break;
        p1--;
    }
    while (prim2)
    {
        if (ePrim(p2))
            break;
        p2++;
    }
    cout << "Diferenta = " << (p2-p1) << "\nP1 = " << p1 << "\nP2 = " << p2;
    return 0;
}

int main() {
    int n;
    cout << "Ia zi bre cat e N: ";
    cin >> n;
    i_prim(n);
}
