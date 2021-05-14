//Sa se afiseze numerele de patru cifre care au cifrele zecilor si sutelor egale si sunt patrate perfecte

#include <iostream>
using namespace std;

main()
{
    int i,j;
    for (i = 1000; i <= 9999; i++) {
        if ((i / 10 % 10) == (i / 100 % 10)) {
            for (int j = 31; j <= 99; j++) {
                if (j*j == i) {
                    cout << i << ", ";
                }
            }
        }
    }
}