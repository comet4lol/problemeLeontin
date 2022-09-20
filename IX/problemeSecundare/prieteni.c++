// Într-un grup sunt n prieteni. Când se întâlnesc se salută, fiecare dând mâna cu toți ceilalți. Câte strângeri de mână au loc?

#include <iostream>
using namespace std;

int main() {
 	long long n,s=0;
    cin >> n;
    for (int i = 1; i < n; i++) 
        for (int j = i+1; j <= n; j++) s++;	
    cout << s;
}