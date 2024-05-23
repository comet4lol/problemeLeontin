#include <iostream>
#include <fstream>

using namespace std;

int prim(int a)
{
    /* Se da fisierul NR.TXT care contine mai multe numere. Afisati in ordine crescatoare toate numerele prime din fisier. */
    int sem=1;
    for(int d=2;d<=a/2;d++)
    {
        if(a%d == 0)
        {
            sem = 0;
        }
    }
    if(a==1 || a==0)
    {
        sem=0;
    }
    if(sem == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int v[2^31-1],k=-1,x,aux;
    ifstream f("NR.TXT");
    while(!f.eof())
    {
        f>>x;
        if(prim(x)==1)
        {
            k++;
            v[k]=x;
        }
    }
    for(int i=0;i<=k-1;i++)
    {
        for(int j=i+1;j<=k;j++)
        {
            if(v[i]>=v[j])
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }
    for(int i=0;i<=k;i++)
    {
        cout<<v[i]<<" ";
    }
    f.close();
}