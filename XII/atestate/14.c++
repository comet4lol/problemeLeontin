/*Fie doi vectori x si y cu n componente, numere intregi, fiecare.
Sa se calculeze expresia : E = min(x1,yn)+min(x2,yn-1)+….+min(xn,y1), unde min reprezinta minimul dintre cele doua componente*/

#include <iostream>
using namespace std;

int main() {
    int n,s=0;
    cout<<"introdu n";
    cin>>n;
    int x[n],y[n];
    for(int i=0; i<n; i++){
        //cout<<"X["<<i<<"]="<<endl;
        cin>>x[i];
    }
    for(int i=0; i<n; i++){
        //cout<<"Y["<<i<<"]="<<endl;
        cin>>y[i];
    }
    int j=n-1;
    for(int i=0; i<n; i++)
    {
        if(x[i]<y[j])
            s+=x[i];
        else if(x[i]>y[j])
            s+=y[j];
        else s+=x[i];
        j--;
    }
    cout<<s;
    return 0;
}