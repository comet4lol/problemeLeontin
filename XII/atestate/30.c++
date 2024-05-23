/*

Se citeste un vector cu  n componente. Afisati suma numerelor de tip palindrom din vector.

*/

#include <iostream>

using namespace std;

int palindrom(int a)
{
    int aux=a,x=0,c;
    while(aux!=0)
    {
        c=aux%10;
        x=x*10+c;
        aux/=10;
    }
    if(x==a)
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
    int n,s=0;
    cout<<"n=";
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(palindrom(v[i])==1)
        {
            s+=v[i];
        }
    }
    cout<<"s="<<s;
}