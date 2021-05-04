#include <iostream>
using namespace std;

main() {
 int k=0,i,sem,aux;
 for (i = 1; i <= 123456789; i++) {
     sem=1;
     aux=i;
        while(aux>9) {
            if(aux%10<=(aux/10%10)) {
                sem=0;
            }
            aux=aux/10; 
        }
    if (sem) {
    k++;
    cout << "," << i;
    }
 }
 cout << endl << "Numere naturale strict crescatoare=" << k;
}
