#include <iostream>
#include <stdlib.h>

// Se considera doi vectori cu componente reale. Se citeste un numar natural k.
// Sa se intercaleze in primul vector, inainte de pozitia k, tabloul al doilea.
// Exemplu: x = (1, 2, 5) y = (3,4) si k = 2 atunci x = (1, 2, 3 , 4, 5)

using namespace std;

int main()
{
    int x[101], y[101];
    int n, m, i, k;
    cin >> n >> m >> k;

    for (i = 0; i < n; i++)
    {
        x[i] = rand() % 150;
        cout << x[i] << "\t";
    } cout << endl;

    for (i = 0; i < m; i++)
    {
        y[i] = rand() % 150;
        cout << y[i] << "\t";
    }
    cout << endl;

    for (i = n-1; i >= k; i--) {
        x[i+m] = x[i];
    }
    int j = 0;
    for (i = k; i < m+k; i++) {
        x[i] = y[j];
        j++;
    }

    for (i = 0; i < n+m; i++)
    {
        cout << x[i] << "\t";
    }
    cout << endl;

    return 0;
}