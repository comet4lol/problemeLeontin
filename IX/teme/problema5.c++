// Se citeste de la tastatura un vector cu n (1<=n<=100) componente de tip intreg
// adica e int arr[n]
// Se cere sa se construiasca si sa se afiseze un nou vector cu componentele patrate 
// perfecte din vectorul intial
#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int i,suma = 0, n, interval ;
    cout << "Cat de mare sa fie tabloul ?  ";
    cin >> n;
    cout << "Numarul pentru generare prin rand() ?  ";
    cin >> interval;
    int v[n];
    int v2[n] = { };
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        v[i] = (rand() % interval);
        cout << v[i] << " , ";
        if ( sqrt(v[i]) * sqrt(v[i]) == v[i] ) {
          v2[i] = v[i]; 
        }
    }  
    cout << "]" << endl;
    cout << "Patrate perfecte: " << endl;
    cout << "[";
    for (int i = 0; i < n; i++ ) {
        cout << v2[i] << " , ";
    }
    cout << "]";
}