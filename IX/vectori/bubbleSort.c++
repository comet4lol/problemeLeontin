#include <iostream>
using namespace std;

int main() {
    int i, n, interval;
    cout << "Cat de mare sa fie tabloul ?  ";
    cin >> n;
    cout << "Numarul pentru generare prin rand() ?  ";
    cin >> interval;
    int v[n];
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        v[i] = (rand() % interval) - (interval / 2);
        cout << v[i] << " , ";
    }
    cout << "]" << endl;
    bool sem = false;

    do {
        sem = false;
        for(int i = 0 ; i < n-1 ; i++) {
            if (v[i] >v[i+1] ) {
                int aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                sem = true;
            }
        }
    } while(sem);
    cout << "Sortat este :  " << endl;;
    cout << "[";

    for (int i = 0 ; i < n ; i++) {
        cout << v[i] << " ,  ";
    }

    cout << "]" << endl;

}