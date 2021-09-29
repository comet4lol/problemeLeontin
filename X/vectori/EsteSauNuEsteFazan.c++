// fazan, ultima cifra dintr-un numar e egala cu prima din urmatorul nr
#include <iostream>

using namespace std;

int main()
{
    int i, j, n, uc, pc, interval;
    bool sem = 1;

    cout << "Cat de mare sa fie tabloul ?  ";
    cin >> n;
    cout << "Numarul pentru generare prin rand() ?  ";
    cin >> interval;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        v[i] = rand() % interval;
    }

    cout << "[";

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " , ";
    }
    cout << "]";

    for (i = 0; i < n-1; i++)
    {
        uc = v[i] % 10;
        pc = v[i+1];
        while (pc > 9)
        {
            pc /= 10;
        }
        pc /= 10;
        if (uc != pc) {
            sem = 0;
        }
    }

    if (sem)
    {
        cout << "\nVectorul este fazan";
    }
    else {
        cout << "\nVectorul nu este fazan";
    }
}