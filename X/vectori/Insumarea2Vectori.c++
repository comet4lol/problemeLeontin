// se dau 2 vectori, sa se verifice daca  primul se poate "reduce" la al doilea vector prin insumare
#include <iostream>

    using namespace std;

int main()
{
    int i, j, n, m, aux, s, interval;

    cout << "Cat de mare sa fie tabloul ? x[n] ";
    cin >> n;
    cout << "Cat de mare sa fie tabloul ? y[m] ";
    cin >> m;
    cout << "Numarul pentru generare prin rand() ?  ";
    cin >> interval;
    int x[n], y[m];
    for (int i = 0; i < n; i++)
    {
        x[i] = rand() % interval;
    }
    cout << "v2";
    for (int i = 0; i < m; i++)
    {
        y[i] = rand() % interval;
    }

    cout << "[";

    for (int i = 0; i < n; i++)
    {
        cout << x[i] << " , ";
    }
    cout << "]" << endl;

    cout << "[";

    for (int i = 0; i < m; i++)
    {
        cout << y[i] << " , ";
    }
    cout << "]";

    i = 0;
    j = 0;

    while (i < n && j < m) {
        s = 0;
        while (s < y[j] && i < n)
        {
            s+= x[i];
            i++;
        }
        if (s == y[j]) {
            j++;
        }
        else {
            i = n+1;
        }
    }

if (j == m && i == n) 
{ 
    cout << "\nVectorii se pot reduce prin insumare";
}
else {cout << "\nVectorii nu se pot reduce prin insumare";}

}