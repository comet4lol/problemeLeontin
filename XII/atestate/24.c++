#include <iostream>

using namespace std;

/* Calculati suma minimelor din fiecare coloana a matricii AM,N */

int main()
{
    int A[100][100], m, n, i, j, s=0, min;
    
    cin>>n>>m;
    for(i=0; i<n; i++)
        for(j=0; j<m; j++) cin>>A[i][j];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++) cout<<A[i][j]<<" ";
        cout<<endl;
    }
    for(j=0; j<m; j++)
    {
        min=A[0][j];
        for(i=0; i<n; i++) if(A[i][j]<min) min=A[i][j];
        s+=min;
    }
    cout<<endl;
    cout<<"Suma minimelor de pe coloane este "<<s;
}