#include <iostream>
#include <string.h>

using namespace std;

int main() {
    // Se citesc trei siruri. Sa se inlocuiasca fiecare aparitie a primului sir din al treilea sir cu al doilea sir.
    // ex: s1= ion, s2 = dan, s3 = salut ion ce faci esti bine ion?
    // rezultat : salut dan ce faci esti bine dan?
    char s1[100],s2[100],s3[100];
    cout << "Introdu primul sir : ";
    cin.getline(s1,100);
    cout << "Introdu al doilea sir : ";
    cin.getline(s2,100);
    cout << "Introdu al treilea sir : ";
    cin.getline(s3,100);
    char * adresa = strstr(s3,s1);
    while ( strstr(s3,s1) != NULL) {
        char aux[100];
        int poz = strstr(s3,s1) - s3;
        strcpy(aux, s3+poz+strlen(s1));
        strcpy(s3+poz,aux);
        // pana aici am sters aparitia lui s1;
        // copiem intr-un alt auxiliar parte dupa ce am scos s1
        char rest[100] = {0};
        int k = 0;
        for ( int i = poz+strlen(s2); i < strlen(s3);i++){
            rest[k] = s3[i];
            k++;
        }
        rest[k+1] = '\0';
        cout << endl << "Textul fara S1 : " << s3;
        cout << endl << "Restul textului : " << rest << endl;
        // adaugam s2 in s3;
        strcpy(aux, s3 + poz);
        strcpy(s3 + poz + strlen(s2), aux);
        strcpy(s3 + poz, s2);
        // adaugam restul sirului
        strcat(s3,rest);

    }
    cout << "Textul final este : " << s3;
}