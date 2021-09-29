// sa se precizee care cifra/cifre apar de cele mai multe ori

#include <iostream>

using namespace std;

int main()
{
    int i, j, n, aux, c, interval, max;

    cout << "Cat de mare sa fie tabloul ?  ";
    cin >> n;
    cout << "Numarul pentru generare prin rand() ?  ";
    cin >> interval;
    int v[n], x[10] = {0};
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

    for (i = 0; i < n; i++) {
        aux = v[i];
    do {
        c = aux % 10;
        x[c]++;
        aux /= 10; } 
    while (aux != 0);
    }

    max = -1;
    for (int i = 0; i<10; i++)
    {
        if (x[i] > max)
        max = x[i];
    }
    cout << "\nCele mai gasite cifre sunt: ";
    for (i = 0; i < 10; i++)
    {
        if (x[i] == max) {
            cout << i << " ";
        }
    }

}
