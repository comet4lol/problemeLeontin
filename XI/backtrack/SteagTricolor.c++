#include <iostream>
#include <cmath>
using namespace std;

int ST[20], k, AS, EV, i, n,p;

/* 
Se cit n culori (n>3), Sa se afiseze toate steagurile tricolore care au in mijloc culoarea verde sau lila 
Presupunem ca verde = 1 si lila = 2
*/

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

if (k == 2) 
    if (ST[2] != 1 && ST[2] != 2) EV=0;
}

int solutie() {return (k==p);}

void tipar() {
for(i = 1; i <= k; i++) cout << ST[i] << " ";
cout << endl;
}

int main()
{
    cout << "n=";
    cin >> n;
    p=3;

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


