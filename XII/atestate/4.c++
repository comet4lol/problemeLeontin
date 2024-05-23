#include <iostream>

using namespace std;

/*Se citeste o matrice patratica AN,N Sa se construiasca si sa se afiseze simetrica fata de diagonala principala.*/

int main()
{
    int A[100][100], n, i, j, aux;
    
    cin>>n;
    for(i=0; i<n; i++)
        for(j=0; j<n; j++) cin>>A[i][j];
    for(i=0; i<n; i++)
        for(j=0; j<i; j++)
        {
            aux=A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=aux;
        }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++) cout<<A[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}