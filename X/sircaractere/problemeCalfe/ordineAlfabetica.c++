// Afișați în ordine alfabetica cuvintele de lungime maxima dintr-un text.

#include <iostream>
#include <string.h>

using namespace std;

int main () {
    char sir[100], t[100], v[100][100];
    int i=0,k,j,max=0,x=0;
    cout << "Introdu sirul: ";
    cin.getline(sir, 100);

    while (i < strlen(sir)) {
        k = 0;
        j = i;
        while (isalpha(sir[j])) {
            t[k] = sir[j];
            j++;
            k++;
        }
        t[k+1] = '\0';
        if (k > max) {
            max = k;
            x= 0;
            strcpy(v[x],t);
            v[x][k] = '\0';
        } else if (k == max) {
            x++;
            strcpy(v[x],t);
            v[x][k] = '\0';
        }

        i = j+1;
    }

    for (int i = 0; i<=x-i; i++) 
        for (int j = i+1; j<=x; j++) 
            if (strcmp(v[i],v[j]) > 0) {
                strcpy(t,v[i]);
                strcpy(v[i],v[j]);
                strcpy(v[j],t);
            }

    for (int i = 0; i <= x; i++) {
        cout << v[i] << endl;
    }

}