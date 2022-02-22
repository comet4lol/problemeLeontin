#include <iostream>
#include <string.h>

using namespace std;

int main() {
    // 2. Afișați în ordine alfabetica cuvintele de lungime maxima dintr-un text.
    char text[100],cuvinte[100][100],aux[100];
    int maxLungime = 0;
    int k = 0;
    cout << "Introdu textul : ";
    cin.getline(text,100);
    char *bucata = strtok(text," ");
    while ( bucata != NULL) {
        int lungime = strlen(bucata);
        k++;
        strcpy(cuvinte[k],bucata);
        if (lungime > maxLungime) maxLungime = lungime;
        bucata = strtok(NULL," ");
    }
    cout << "Lungime maxima : " << maxLungime << endl;
    for (int i = 0; i < k;i++) {
        for( int j = i+1; j < k;j++) {
            if ( strlen(cuvinte[i]) == maxLungime) {
                if ( strcmp(cuvinte[i],cuvinte[j]) > 0 ) {
                    strcpy(aux,cuvinte[i]);
                    strcpy(cuvinte[i],cuvinte[j]);
                    strcpy(cuvinte[j],aux);
                }
            }
        }
    }
    for (int i = 0 ; i < k+1;i++) {
        if (strlen(cuvinte[i]) == maxLungime) cout << cuvinte[i] << endl;
    }
 
}