//Se da un tablou cu n elemente , sa se elimine toate elementele pare;
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


    for (int i = n-1; i >= 0 ; i--) {
        if (array[i] % 2 == 0 ) {
            poz=i;
            for (int j = poz+1; j < n; j++) {
                array[j-1] = array[j];
            }
            n--;
        }
    }
    array[n];


    cout << "Au ramas   " <<  n << "     elemente " << endl;
    cout << "[";

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " , ";
    }
    cout << "]";
}