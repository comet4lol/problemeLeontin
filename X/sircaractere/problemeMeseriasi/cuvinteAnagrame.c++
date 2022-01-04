#include <iostream>
#include <string.h>

using namespace std;


int main() {
    // Să se scrie un program care verifică dacă două cuvinte date sunt anagrame.
    // Două cuvinte sunt anagrame dacă primul se poate obține prin schimbarea ordinii literelor celui de-al doilea.
    // ex : rutina si unitar
    // rezultat : da
    char s[20],t[20];
    int vectorFrecventaS[128] = {0};
    int vectorFrecventaT[128] = {0};
    // aici folosim doi vectori de frecventa, apoi le comparam numarul de aparitii.
    // folosim cin pt ca nu avem nevoie de spatii ( nu are rost sa adaugam un factor in plus)
    cout << "Introdu primul cuvant : ";
    cin >> s;
    cout << endl;
    cout <<  "Introdu al doilea cuvant : ";
    cin >> t;
    

    if (strlen(s) != strlen(t)) {
        cout << "Lungimi diferite , nici nu imi mai bat capul !";
        return 0;
    } 
    for (int i = 0 ; i < strlen(s);i++) {
        char litera = s[i];
        int codASCII = int(litera);
        vectorFrecventaS[codASCII]++;
    }
    for (int i = 0 ; i < strlen(s); i++) {
        char litera = t[i];
        int codASCII = int(litera);
        vectorFrecventaT[codASCII]++;
    }
    bool suntAnagrame = true;
    for ( int i = 0 ; i < strlen(s); i++) {
        if ( vectorFrecventaS[i] != vectorFrecventaS[i]) {
            suntAnagrame = false;
            break;
        }
    }
    if (suntAnagrame) {
        cout << "Da";
    } else cout << "Nu";
    return 0;
}