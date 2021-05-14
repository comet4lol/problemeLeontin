//Afișați suma primelor N numere prime.
#include <iostream>
using namespace std;

main()
{
    int numerePrime,suma,contorNrPrime,i,d,nr;
    cout << "Cate numere prime trebuie adunate?  ";
    cin >> numerePrime;
    contorNrPrime=0;
    i=2;
    nr=0;
    while (contorNrPrime<numerePrime) {
    for (d = 2; d <= i / 2; d++)
    { 
        if (i % d == 0)
            nr++;
    }
    if (nr == 0) {
        suma+=i;
        contorNrPrime+=1;}
    i+=1;   
    nr=0;
    }
    cout << "Suma este egala cu " << suma;
}
