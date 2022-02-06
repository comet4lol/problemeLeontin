#include <iostream>
#include <string.h>

using namespace std;

int main () {
    char s[100];

    cout << "Textul este: ";
    cin.getline(s, 100);
    char * p = strtok(s , " ");
    while(p != NULL)
    {
        bool sem = true;
        for(int i = 0; i < strlen(p); i++) {
            if (strchr("aeiou", p[i]) == NULL) sem = false;
        }
        if (sem) 
        cout << p << endl;
        p = strtok(NULL , " ");
    }


}