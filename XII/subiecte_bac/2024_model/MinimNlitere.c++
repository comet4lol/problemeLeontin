/*

Un text are cel mult 100 de caractere, iar cuvintele sale sunt formate numai din litere mici ale alfabetului
englez, sunt distincte și sunt separate prin câte un spațiu. Scrieți un program C/C++ care citește de la
tastatură un număr natural n (n[1,102]), apoi un text de tipul precizat mai sus, și afișează pe ecran
cuvinte ale acestuia, pe două linii separate, astfel încât prima linie să conțină mulțimea cuvintelor care
au mai puțin de n litere, iar a doua linie să conțină mulțimea cuvintelor care au mai mult de n litere.
Cuvintele de pe fiecare linie sunt afișate într-o ordine oarecare, iar dacă una dintre cele două mulțimi
este vidă, se afișează pe ecran doar mesajul nu exista.
Exemplu: pentru n=3 și textul era o apa rece si cu gust bun
se poate afișa pe ecran textul alăturat. (10p.)
o si cu
rece gust


*/

#include <iostream>
#include <string.h>
using namespace std;


int main() {
    int n=3;
    char text[101];
    char subn[101] = "", pesten[101] = "",T[101] = "";
    cin.getline(text,100);
    strcat(text," ");

    int p,k=0;
    while (strlen(text) !=0) {
        p = strchr(text,' ')-text;
        strcpy(T,text);
        T[p+1] = '\0';
        if (strlen(T)-1 > n) {
            strcat(pesten,T);
        } else if (strlen(T)-1 < n) strcat(subn,T);

        strcpy(text,text+p+1);
        k++;
    }


    if (strcmp(subn,"") != 0) {
        cout << subn << endl;
    } else cout << "nu exista" << endl;
    
    if (strcmp(pesten,"") != 0) {
        cout << pesten << endl;
    } else cout << "nu exista" << endl;
}
