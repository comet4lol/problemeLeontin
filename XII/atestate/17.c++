#include <iostream>

using namespace std;

/*Suma primei cifre a elementelor unui vector*/

int p(long int x)
{
    while(x>9) x/=10;
    return x;
}

int main()
{
    long int x, v[100];
    int n, i, s=0;
    
    cin>>n;
    for(i=0; i<n; i++) cin>>v[i];
    for(i=0; i<n; i++) s+=p(v[i]);
    cout<<s;
}