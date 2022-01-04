#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char sir[100];
    cout << "Introdu propozitia: ";
    cin.getline(sir,100);
    char *bucata = strtok(sir," ");
    while ( bucata != NULL) {
        cout << bucata << endl ;
        bucata = strtok(NULL, " ");
    }
}