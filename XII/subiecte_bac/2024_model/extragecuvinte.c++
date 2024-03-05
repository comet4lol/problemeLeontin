#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char sir[100], sub[100], peste[100], temp[100];
    int i=0,j=1,n;
    cout << "Introdu propozitia: ";
    cin.getline(sir,100);
    cout << "n=";
    cin >> n;
    strcpy(sir+strlen(sir), " ");
    
    do { 
        i = strchr(sir, ' ')-sir;
        strcpy(temp, sir+i+1);
        sir[i] = '\0';
        if (strlen(sir) > n) {
            strcpy(peste+strlen(peste), sir);
            strcpy(peste+strlen(peste), " ");
        } else if (strlen(sir) < n) {
            strcpy(sub+strlen(sub), sir);
            strcpy(sub+strlen(sub), " ");    
        }
        strcpy(sir,temp);
    } while (strchr(sir, ' ') != NULL);

    cout << peste << "\n";
    cout << sub;
}