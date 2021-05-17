//Se dau 2 vectori ordonati strict crescator. Sa se af. in ordine crescatoare nr. divizibile cu 5 care se gasesc doar intr-unul dintre vectori.
#include <iostream>
using namespace std;

int main()
{
    int n, m, i=0, j=0, interval, T;
    cout << "Cat de mare sa fie tabloul n?= ";
    cin >> n;
    cout << "Cat de mare sa fie tabloul m?= ";
    cin >> m;
    cout << "Numarul pentru generare prin rand() ?= ";
    cin >> interval;
    int x[n];
    int y[m];
    for (int i = 0; i < n; i++)
    {
        x[i] = rand() % interval;
    }
    for (int i = 0; i < m; i++)
    {
        y[i] = rand() % interval;
    }
    bool sem;
    do
    {
        sem = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (x[i] > x[i + 1])
            {
                int aux = x[i];
                x[i] = x[i + 1];
                x[i + 1] = aux;
                sem = true;
            }
        }
    } while (sem);
    do
    {
        sem = false;
        for (int i = 0; i < m - 1; i++)
        {
            if (y[i] > y[i + 1])
            {
                int aux = y[i];
                y[i] = y[i + 1];
                y[i + 1] = aux;
                sem = true;
            }
        }
    } while (sem);

    cout << "\nVectorul X are componentele:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << x[i] << "\t";
    }
    cout << "\nVectorul Y are componentele:" << endl;
    for (i = 0; i < m; i++)
    {
        cout << y[i] << "\t";
    }
    cout << "\nNumerele unice divizibile cu 5 sunt:" << endl;
    i=0;
    j=0;
    while (i < n && j < m)
    {
        sem = false;
        if (x[i] < y[j])
        {
            if (x[i] % 5 == 0) {
                sem = true;
                for(T=0; T < m; T++) {
                    if (x[i] == y[T]) {
                        sem = false;
                    }
                }
                if (sem) {
                    cout << x[i] << "\t";
                }
            }
            i++;
        }
        else
        {
            if (y[j] % 5 == 0)
            {
                sem = true;
                for (T = 0; T < n; T++)
                {
                    if (y[j] == x[T])
                    {
                        sem = false;
                    }
                }
                if (sem)
                {
                    cout << y[j] << "\t";
                }
            }
            j++;
        }
    }
    if (i < n)
    {
        for (T = i; T < n; T++)
        {
            if (x[T] / 5 == 0) {
                cout << x[T] << "\t";
            }
        }
    }
    else
    {
        for (T = j; T < m; T++)
        {
            if (y[T] / 5 == 0) {
                cout << y[T] << "\t";
            }
        }
    }
}