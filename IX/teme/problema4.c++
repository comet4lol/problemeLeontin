#include <iostream>
using namespace std;

int main() {
    int i,suma = 0, n /*interval */;
    cout << "Cat de mare sa fie tabloul ?  ";
    cin >> n;
  
    int array[n];
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        array[i] = (rand() % RAND_MAX) - (RAND_MAX/2) ;

        cout << array[i] << " , ";
        if (array[i] >= 0 ) {
            suma += array[i];
        }
    }
     cout << "]" << endl;
     cout << "Suma este :   " << suma;

}

    // rand_max reprezinta o constanta , cel mai mare numar posibil (max)
    // scadem jumate din el pentru a genera si numere negative
    // cout << "Numarul pentru generare prin rand() ?  ";
    // cin >> interval;