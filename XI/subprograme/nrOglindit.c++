// Se dau două numere naturale n și m. Să se determine suma dintre oglinditul lui n și oglinditul lui m.

#include <iostream>
using namespace std;

int ogl(int x)
{
    int r = 0;
    do
    {
        r = 10 * r + x % 10;
        x /= 10;
    }
    while(x != 0);
    return r;
}

int main(){
    int n , m;
    cin >> n >> m;
    cout << ogl(n) + ogl(m);
    return 0;
}