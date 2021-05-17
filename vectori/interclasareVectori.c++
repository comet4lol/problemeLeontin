//Se dau 2 vectori. Sa se scrie al 3-lea vector care contine toate nr. ordonate crescator
#include <iostream>
using namespace std;

int main()
{
    int n,m,k=-1,i=0,j=0,interval,T;
    cout << "Cat de mare sa fie tabloul n?= ";
    cin >> n;
    cout << "Cat de mare sa fie tabloul m?= ";
    cin >> m;
    cout << "Numarul pentru generare prin rand() ?= ";
    cin >> interval;
    int x[n];
    int y[m];
    int z[n+m];
    cout << "\nVectorul X are componentele:" << endl;
    for (int i = 0; i < n; i++)
    {
        x[i] = rand() % interval;
        cout << x[i] << "\t";
    }
    cout << "\nVectorul Y are componentele:" << endl;
    for (int i = 0; i < m; i++)
    {
        y[i] = rand() % interval;
        cout << y[i] << "\t";
    }

        while (i < n && j < m)
        {
            if (x[i] < y[j])
            {
                k++;
                z[k] = x[i];
                i++;
            }
            else {
           k++;
           z[k]=y[j];
           j++;
       }
    }
        if (i<n) {
          for(T=i; T<n; T++) {
             k++; 
             z[k]=x[i];
          } 
        }
        else {
          for(T=j; T<m; T++) {
              k++;
              z[k]=y[T];
          }   
        }

        bool sem = false;

        do
        {
            sem = false;
            for (int i = 0; i < n+m-1; i++)
            {
                if (z[i] > z[i + 1])
                {
                    int aux = z[i];
                    z[i] = z[i + 1];
                    z[i + 1] = aux;
                    sem = true;
                }
            }
        } while (sem);

    cout << "\nVectorul Z are componentele:" << endl;
    for (i = 0; i < n + m; i++)
    {
        cout << z[i] << "\t";
    }
}
/*
sosu
// Se dau 2 vectori ordonati crescator, sa se afiseze in ordine crescatoare numerele divizibile cu 5 care se gasesc doar in unul dintre vectori.
#include <iostream>
using namespace std;

int main()
{
    int i, n, n2, interval, j = 0, k = -1;
    int array[n];
    int arrayDoi[n2];
    int n3 = n + n2;
    int arrayTrei[n3];
    bool sem;
    cout << "Cat de mare sa fie primul tabloul ?  ";
    cin >> n;
    cout << "Cat de mare sa fie al doilea tablou ?  ";
    cin >> n2;
    cout << "Numar pentru generare ? ";
    cin >> interval;
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        array[i] = (rand() % interval);
        cout << array[i] << " , ";
    }
    cout << "]" << endl;
    do
    {
        sem = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                int aux = array[i];
                array[i] = array[i + 1];
                array[i + 1] = aux;
                sem = true;
            }
        }
    } while (sem);

    cout << "[";

    for (int i = 0; i < n2; i++)
    {
        arrayDoi[i] = (rand() % interval);
        cout << arrayDoi[i] << " , ";
    }
    cout << "]" << endl;

    do
    {
        sem = false;
        for (int i = 0; i < n2 - 1; i++)
        {
            if (arrayDoi[i] > arrayDoi[i + 1])
            {
                int aux = arrayDoi[i];
                arrayDoi[i] = arrayDoi[i + 1];
                arrayDoi[i + 1] = aux;
                sem = true;
            }
        }
    } while (sem);

    i = 0;
    j = 0;

    while (i < n && j < n2)
    {
        if (array[i] < arrayDoi[j])
        {
            k++;
            arrayTrei[k] = array[i];
            i++;
        }
        else
        {
            k++;
            arrayTrei[k] = arrayDoi[j];
            j++;
        }
    }
    if (i <= n)
    {
        for (int x = i; x < n; x++)
        {
            arrayTrei[k] = array[x];
            k++;
        }
    }
    if (j <= n2)
    {
        for (int x = j; x < n2; x++)
        {
            arrayTrei[k] = arrayDoi[x];
            k++;
        }
    }
    do
    {
        sem = false;
        for (int i = 0; i < n3 - 1; i++)
        {
            if (arrayTrei[i] > arrayTrei[i + 1])
            {
                int aux = arrayTrei[i];
                arrayTrei[i] = arrayTrei[i + 1];
                arrayTrei[i + 1] = aux;
                sem = true;
            }
        }
    } while (sem);
    cout << "[";
    for (int i = 0; i < k; i++)
    {
        cout << arrayTrei[i] << " , ";
    }
    cout << "]" << endl;
}
*/