#include <iostream>
using namespace std;
int main ()
{
    int n,p=1,x=0;
    cin>>n;
    while(n)
    {
        if (n % 10 % 2 == 0) {
            x = p*(n%10) + x + p*10*(n%10) + x;
            p = p*10;
        } else x = p* (n%10) + x; 
        p *= 10;
        n /= 10;
        
    }

    cout<<x;
}