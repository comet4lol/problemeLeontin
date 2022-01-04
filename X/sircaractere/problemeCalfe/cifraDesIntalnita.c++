#include <iostream>
#include <string.h>

using namespace std;


int main() {

    // Scrieţi un program care citeşte de la tastatură un şir de cel mult 50 de caractere 
    // (litere mici şi mari ale alfabetului englez, cifre, puncte, virgule şi spaţii) şi
    // afişează pe ecran cifra care apare de cele mai multe ori în şirul citit.

    // cifra mai mica are prioritate!
    char sir[50];
    int vectorFrecventa[10]={0};
    cout << "Introdu sirul de caractere:  ";
    cin.getline(sir,50);
    for ( int i = 0 ; i < strlen(sir) ; i++) {
        if ( isdigit(sir[i])) {
            int n = int(sir[i]) - 48;
            vectorFrecventa[n]++;
        }
    }
    int maxAparitii = vectorFrecventa[0];
    int max = 0;
    for ( int i = 0 ; i < 10; i++) {
        if ( (vectorFrecventa[i] > maxAparitii)   || ( (vectorFrecventa[i] == maxAparitii) && i < max)  ) {
            maxAparitii = vectorFrecventa[i];
            max = i;
        }
    }
    cout << "Cea mai frecventa cifra este  : " << max << "  avand  " << maxAparitii << " aparitii!";
}