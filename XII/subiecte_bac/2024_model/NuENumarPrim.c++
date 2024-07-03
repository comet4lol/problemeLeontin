#include <iostream>
using namespace std;

/*
Subprogramul DNPI are un singur parametru, n, prin care primește un număr natural (n∈[1,10^9]), și
afișează pe ecran, separați prin câte un spațiu, toți divizorii pozitivi impari ai lui n care NU sunt primi.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=90, se afișează pe ecran, nu neapărat în această ordine, numerele
1 9 15 45 
*/


void DNPI (int n ) {
    // divizorii pozitivi impari ai lui n care NU sunt primi.
    cout << 1 << ' ';
    for ( int d = 9; d <= n/2 ; d+=2 ) {
        if ( n % d == 0) {
            // verificam sa nu fie prim
            bool ePrim = true;
            for (int i = 2 ; i <= d/2 ; i++) {
                if ( d % i == 0) ePrim = false;
            }
            if (!ePrim) cout << d << ' ';
        }
    }
    
}

int main()

{
    
    int n = 30;
    DNPI(n);
    return 0;
}