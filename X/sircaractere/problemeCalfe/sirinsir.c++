// Se dau 2 siruri . De cate ori al doilea este in primul 
#include <iostream>
#include <string.h>

using namespace std;
int main() {

char S[100], T[100];
    int k=0,aux;
    
    cout << "Introdu sirul principal:\n";
    cin.getline(S,100);
    cout << "Introdu sirul care trebuie gasit:\n";
    cin.getline(T,100);
    while (S[0] != '\0') {
        if (strstr(S,T) != NULL) {
            k++;
            aux = strstr(S,T)-S+1;
            strcpy(S,S+aux);
        } else S[0]='\0';

    }
    printf ("Sirul apare de %d ori.", k);
}