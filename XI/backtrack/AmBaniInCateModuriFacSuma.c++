// Am bani de 1,3,5,10 lei - In cate moduri pot sa platesc suma n

#include <iostream>
#include <cmath>
using namespace std;

int ST[20], k, AS, EV, i, n, V[20],S,T=1;

void init() {
ST[k]=0;
}

void succesor() {
if (ST[k]<= n) {
    ST[k]++;
    AS=1;}
else AS=0;
}

void valid() {
EV=1;
S = 0;
if (ST[T]>n/V[T]) T++;
for(i = T; i<=k; i++)
    { S += V[i]*ST[i];
    if (S > n) EV=0;
} }

int solutie() {
return (S == n);
}

void tipar() {
for(i = T; i <= k; i++) cout << ST[i] << "*" << V[i] << " ";
cout << endl;
}

int main()
{
    V[1] = 1;
    V[2] = 3;
    V[3] = 5;
    V[4] = 10;
    cout << "n= ";
    cin >> n;
    k = 1; init();
    
    while (k > 0) {
        do {succesor();
        if (AS) valid();
        } while(!((!AS)||(AS==EV)));
            if (AS)
                if (solutie()) tipar();
                else {k++; init();}
            else k--;

        }

}



