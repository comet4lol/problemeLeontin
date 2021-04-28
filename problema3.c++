#include <iostream>
using namespace std;

int main() {
    int i, n ,interval ;
    cout << "Cat de mare sa fie tabloul ?  ";
    cin >> n;
    cout << "Numarul pentru generare prin rand() ?  ";
    cin >> interval;
    int array[n];
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        array[i] = (rand() % interval) - (interval/2);
        cout << array[i] << " , ";
    }
    cout << "]" << endl;

    for (int i=0;i<n;i++) {
        if ((i % 3 == 0) && (array[i] % 2 == 0) ) {
            cout << array[i] << " , ";
        }
    }
}

