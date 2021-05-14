#include <iostream>
#include <iomanip>
using namespace std;
// nu sunt 100% ca merge , mai are unele kocuri unde face urat
int main() {
    int i, n ,s=0;
    cout << "Cat de mare sa fie tabloul ?  " << endl;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]=";
        cin >> array[i];
    }
    bool sem=true;
    for ( int i = 0; i < n; i++) {
        if ( array[i] * array[i+1] == 0) {
            sem=true;
        }
        else { 
            sem= false;
        }
    }
    if (sem == true) {
        cout <<  " Vectorul este alternativ ! ";
    }
    else { 
        cout <<  " Vectorul nu este alternativ ! ";
    }
}