/*

Se citeste o matrice AM,N. Eliminati linia L si coloana K, apoi afisati matricea.

*/

#include <iostream>

using namespace std;

int main()
{   
    int A[100][100],m,n,L,K;
    cout<<"nr. linii=";
    cin>>m;
    cout<<"nr. coloane=";
    cin>>n;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            A[i][j]=rand()%10;
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Linia pe care vrei sa o elimini =";
    cin>>L;
    cout<<"Coloana pe care vrei sa o elimin=";
    cin>>K;
    for(int i=L;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            A[i][j]=A[i+1][j];
        }
    }
    m--;
    for(int j=K;j<n;j++)
    {
        for(int i=0;i<n;i++)
        {
            A[i][j]=A[i][j+1];
        }
    }
    n--;
    cout<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}