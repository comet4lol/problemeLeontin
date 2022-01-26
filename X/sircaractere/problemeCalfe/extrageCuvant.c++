#include <iostream>
#include <string.h>

using namespace std;

int main () {
    char s[100], sep[] = " ,.";

    cout << "Textul este: ";
    cin.getline(s, 100);
    char * p = strtok(s , sep);
    while(p != NULL)
    {
        cout << p << endl;
        p = strtok(NULL , sep);
    }


}