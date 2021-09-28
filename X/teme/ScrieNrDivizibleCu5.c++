// Se dau x[n] si y[m] ordonati crescator. Sa se afiseze nr. divizibile cu 5 care se gasesc doar intr-unul din vectori

#include <iostream>

using namespace std;

int main()
{
    int i, j, n, m, k = 0, interval, aux;

    cout << "Cat de mare sa fie tabloul x[n] ?  ";
    cin >> n;
    cout << "Cat de mare sa fie tabloul y[m] ?  ";
    cin >> m;
    cout << "Numarul pentru generare prin rand() ?  ";
    cin >> interval;
    int x[n];
    int y[m];

    for (i = 0; i < n; i++)
    {
        x[i] = rand() % interval;
    }

    for (int i = 0; i < m; i++)
    {
        y[i] = rand() % interval;
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (x[i] > x[j])
            {
                aux = x[i];
                x[i] = x[j];
                x[j] = aux;
            }
        }
    }

    for (i = 0; i < m - 1; i++)
    {
        for (j = i + 1; j < m; j++)
        {
            if (y[i] > y[j])
            {
                aux = y[i];
                y[i] = y[j];
                y[j] = aux;
            }
        }
    }

    cout << "x[n] = [";

    for (i = 0; i < n; i++)
    {
        cout << x[i] << " , ";
    }
    cout << "]" << endl;

    cout << "y[m] = [";

    for (int i = 0; i < m; i++)
    {
        cout << y[i] << " , ";
    }
   cout << "]" << endl;

i = 0; j = 0;
cout << "Numerele divizibile cu 5 care se afla doar intr-unul din vectori sunt: ";

while (i < n && j < m)
{
    if (x[i] != y[j])
    {
        if (x[i] < y[j])
        {
            if (x[i] % 5 == 0 && x[i] > 0)
            {
                cout << x[i] << " , ";
            }
            i++;
        }
        else
        {
            if (y[j] % 5 == 0 && y[j] > 0) 
            {
                cout << y[j] << " , ";
            }
            j++;
        }
    } else
    {
        i++;
        j++;
    }
}

}

/*

snippet


   i = 0; j = 0;

   while (i < n && j < m)
   {
       if (x[i] != y[j])
       {
           if (x[i] < y[j] && x[i] % 5 == 0 && x[i] > 0)
           {
               cout << x[i] << " , ";
           }
            else if (y[j] % 5 == 0 && y[j] > 0)
            {
                bool sem=1;
                int k = j+1;
                while (sem && x[k] <= y[j] && k < n)
                {
                    if (x[k] == y[j]) {
                        sem = 0;
                    }
                    k++;
                }
                if (sem) {
                    cout << y[j] << " ,";
                }
            }
       }
       i++;
       j++;
   } */
/*
for (i = n-1; i >= 0; i--)
{
    if (x[i] % 5 != 0 || x[i] == 0)
    {
        for (j = i; j < n - 1; j++)
        {
            x[j] = x[j + 1];
        }
        n--;
    }

}

for (i = m - 1; i >= 0; i--)
{
    if (y[i] % 5 != 0 || y[i] == 0)
    {
        for (j = i; j < m - 1; j++)
        {
            y[j] = y[j + 1];
        }
        m--;
    }
}
*/