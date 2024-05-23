/*Se considera un vector cu n componente, numere intregi. Precizati daca elementele vectorului pot reprezenta elementele unei multimi.*/

#include <iostream>
using namespace std;

bool potReprezentaMultime(int v[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(v[i] == v[j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Introduceti numarul de elemente din vector: ";
    cin >> n;
    int v[n];
    cout << "Introduceti elementele vectorului: ";
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    if(potReprezentaMultime(v, n)) {
        cout << "Elementele vectorului POT reprezenta elementele unei multimi." << endl;
    } else {
        cout << "Elementele vectorului NU pot reprezenta elementele unei multimi." << endl;
    }
    return 0;
}