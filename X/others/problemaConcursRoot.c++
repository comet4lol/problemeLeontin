#include <iostream>
#include <cmath>
using namespace std;

long long nroot(int n, long long x)
{
    if ( x==0) cout << 0;
    if ( x< 0) x = -x;
    float exponent = (double) 1/n;
    cout << pow(x, exponent);
}
int main() {
    int a,b;
    cout << "Introdu primul numar : ";
    cin >> a;
    cout << "Introdu al doile numar : ";
    cin >> b;
    nroot(a,b);
    return 0;
}