#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char sir[100],temp[100], v[20][20];
    int i,j,n;
    cout << "Introdu propozitia: ";
    cin.getline(sir,100);
    n = strlen(sir);
    strcpy(sir+n, " ");

    n = -1;
    
    do { 
        i = strchr(sir, ' ')-sir;
        strcpy(temp, sir+i+1);
        sir[i] = '\0';
        cout << sir << endl;
        n++;
        strcpy(v[n],sir);
        strcpy(sir,temp);
    } while (strchr(sir, ' ') != NULL);

    for (i = 0; i<=n-1;i++) 
        for (j= i+1; j<=n; j++)
            if (strcmp(v[i],v[j])>0) {
                strcpy(temp,v[i]);
                strcpy(v[i],v[j]);
                strcpy(v[j],temp);
            }

    cout << "\n";

    for (i = 0; i <= n; i++) {
        cout << v[i] << endl;
    }

}