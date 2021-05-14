#include <iostream>
using namespace std;

int main() {
    int i, n, interval , poz,valo;
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
    }
    cout << "]" << endl;
    cout << "Pe ce pozitie vrei sa elimini un nr ?";
    cin >> poz;
    // cout << "Dar ce valoare?" << endl;;
    // cin >> array[poz];
    
    for (int i= poz+1; i<n;i++) {
        array[i-1] = array[i];
    }
    n--;
    cout << "[";

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " , ";
    }
    cout << "]";
}