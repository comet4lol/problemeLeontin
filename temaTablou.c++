// Se genereaza un tablou sa se afiseze in ordine crescatoare numerele
// pare si in ordine descrescatoare numerele impare.
#include <iostream>
using namespace std;

int main() {
    int i, n, interval,m=-1,l=-1;
    cout << "Cat de mare sa fie tabloul ?  ";
    cin >> n;
    cout << "Numarul pentru generare prin rand() ?  ";
    cin >> interval;
    int array[n];
    int arrayPare[n];
    int arrayImpare[n];
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        array[i] = (rand() % interval);
        cout << array[i] << " , ";



        if(array[i] % 2 == 0) {
            m++;
            arrayPare[m] = array[i];
        }
        else {
            l++;
            arrayImpare[l] = array[i];
        }
    }
    
    cout << "]" << endl;
    
    bool sem;
    if (m != -1) {
    do {
        sem = false;
        for(int i = 0 ; i < m-1 ; i++) {
            if (arrayPare[i] >arrayPare[i+1] ) {
                int aux = arrayPare[i];
                arrayPare[i] = arrayPare[i+1];
                arrayPare[i+1] = aux;
                sem = true;
            }
        }
    } while(sem);
    }
    if (l != -1) {
    do {
        sem = false;
        for(int i = 0 ; i < l ; i++) {
            if (arrayImpare[i] < arrayImpare[i+1] ) {
                int aux = arrayImpare[i];
                arrayImpare[i] = arrayImpare[i+1];
                arrayImpare[i+1] = aux;
                sem = true;
            }
        }
    } while(sem);
    }

    if (m != -1) {
    cout << "Numere pare : " << endl;
    cout << "[ ";
    for(i=0;i<m;i++) {
        cout << arrayPare[i] << "  , ";
    }
    cout << " ] " << endl;
    } else { 
        cout <<  "Nu au fost gasite numere pare." << endl;
    }

    if (l != -1) {
    cout << "Numere impare : " << endl;

    cout << "[ ";

    for (i=0;i<l;i++) {
        cout << arrayImpare[i] << "  , ";
    }

    cout << " ] ";
    
    } else {
        cout << "Nu au fost gasite numere impare.";
    }
    
}