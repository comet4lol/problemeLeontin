#include <iostream>
#include <string.h>

using namespace std;

int main () {
    char sir[200], t[200];
    int i = 0;
    cout << "Textul este: ";
    cin.getline (sir, 100);

    while (i < strlen(sir)) {
        if (strchr("aeiou", sir[i]) != NULL) {
            strcpy(t , sir + i);
            strcpy(sir + i + 1 , t);
            i++;
        }
        i++;
    }

    cout << sir;

}