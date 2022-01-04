#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    // Să se scrie un program care citeşte un şir de caractere format din litere mici ale alfabetului englez şi înlocuieşte fiecare vocală cu litera mare corespunzătoare.
    char a[200];
    cout << "Introdu sirul de caractere:  ";
    cin.getline(a,200);
    for( int i = 0 ; i < strlen(a) ; i++) {
        char x = a[i];
        if ( (x=='a') || (x=='e') || (x=='i') || (x=='o') || (x=='u')) x = toupper(x);
        a[i] = x;
    }
    cout << "Rezultat : " << endl << a;
}