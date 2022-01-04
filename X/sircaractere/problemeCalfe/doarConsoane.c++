#include <iostream>
#include <string.h>

using namespace std;

int main() {

    // Se consideră un cuvânt format din cel puțin două și cel mult 100 de caractere, numai litere mici ale alfabetului englez.
    // Scrieţi un program care citeşte de la tastatură un cuvânt de tipul precizat și afișează pe ecran mesajul DA în cazul în care cuvântul conține doar consoane şi, 
    // eventual, vocala i, sau mesajul NU în caz contrar.
    char sir[100];
    cout << "Introdu cuvantul :  ";
    cin.getline(sir,100);
    if( strlen(sir) < 2)  return 0;
    bool semaforConsoane = true;
    bool contineI = false;
    for ( int  i = 0 ; i < strlen(sir) ; i++) {
        if (sir[i] == 'i') contineI = true;
        if ( (  (sir[i] == 'a') || (sir[i] == 'e') || (sir[i] == 'o') || (sir[i] == 'u')) ) {
            semaforConsoane = false;
        }
    }
    // nu merge pt cazul particular "iiiii" , se poate face o taraneasca

        bool eAcelasiCaracterLoL = true; // aici e taraneasca
    for ( int i = 1 ; i < strlen(sir); i++) {
        if ( sir[i] != sir[0]) {
            eAcelasiCaracterLoL = false;
        }
    }
    if (eAcelasiCaracterLoL) {
        cout << "Nu" << endl << "E aceiasi caracter lol (caz particular)";
        return 0;
    } // uite pana aici bre

    // cout << "Debug : " << endl << "Semafor consoane: " << semaforConsoane << endl << "Contine i: " << contineI << endl;
    if (semaforConsoane) {
            cout << "Da";
    } else cout << "Nu";
    
    return 0;
}