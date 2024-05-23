#include <iostream>

using namespace std;

int main()
{
    /* Se citeste un vector cu n componente. 
    Sa se inverseze elementele egal departate de extremitatile vectorului, iar apoi sa se schimbe semnul fiecarui element si sa se afiseze vectorul obtinut. */
    int n,aux;
    cout<<"n=";
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //inversarea elementelor egal departate de extremitati
    if(n%2==0)
    {
        for(int i=0;i<=n/2-1;i++)
        {
            aux=v[i];
            v[i]=v[n-i-1];
            v[n-i-1]=aux;
        }
    }
    else
    {
        for(int i=0;i<=n/2;i++)
        {
            aux=v[i];
            v[i]=v[n-i-1];
            v[n-i-1]=aux;
        }
    }
    for(int i=0;i<n;i++)
    {
        v[i]=v[i]*-1;
        cout<<v[i]<<" ";
    }
}