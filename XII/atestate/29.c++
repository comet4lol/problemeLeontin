/*

Afisati maximul dintre elementele pare ale unei matrici. Daca nu exista se va afisa un mesaj corespunzator

*/


#include <iostream>

using namespace std;

int main()
{   
    int a[100][100],m,n,max,sem=1;
    cout<<"nr. linii=";
    cin>>m;
    cout<<"nr coloane=";
    cin>>n;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[i][j]=rand()%4;
            if(sem==1 & a[i][j]%2==0)
            {
                max=a[i][j];
                sem=0;
            }
            if(sem==0 && a[i][j]%2==0 && a[i][j]>max)
            {
                max=a[i][j];
            }
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    if(sem==0)
    {
        cout<<"max="<<max;
    }
    else
    {
        cout<<"nu exista elemente pare";
    }
}