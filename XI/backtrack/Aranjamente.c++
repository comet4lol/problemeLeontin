#include <iostream>
#include <cmath>
using namespace std;

int ST[20], k, AS, EV, i, n,p;

void init() {
ST[k] = 0;
}

void succesor() {
if (ST[k]< n) {
    ST[k]++;
    AS=1;}
else AS=0;
}

void valid() {
EV=1;

for(i = 1; i<k; i++)
    if (ST[k]==ST[i]) EV=0;
}

int solutie() {return (k==p);} // if k == n then permutari

void tipar() {
for(i = 1; i <= k; i++) cout << ST[i] << " ";
cout << endl;
}

int main()
{
    cout << "n= " ;
    cin >> n;
    cout << "p=";
    cin >> p;

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


