#include <iostream>

using namespace std;

int main() {
    int i, n, interval ,s=0;
    cout << "Cat de mare sa fie tabloul ?  ";
    cin >> n;
    cout << "Numarul pentru generare prin rand() ?  ";
    cin >> interval;
    int array[n];
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        array[i] = (rand() % interval) - (interval / 2);
        cout << array[i] << " , ";
        if ( ( array[i] % 2 ==0 ) && ( array[i] < 0) ) {
            s+=array[i];
        }
    }
    cout << "]" << endl;
    cout << "Suma este :   " <<  s;
}