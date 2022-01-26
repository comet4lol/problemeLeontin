#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char sir[100],t[100];
    int i = 0;
    cout << "Textul este: ";
    cin.getline (sir, 100);

    //while (i < strlen(sir)) {
        
                char * x = strchr(sir, ' ');
                int p = x-sir;
                strcpy(t, sir + p);
                strcpy(sir + p + p + 1, t);
            cout << sir;
    //}
    // se lucreaza
}