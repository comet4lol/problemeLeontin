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