#include <iostream>
#include <string.h>
using namespace std;

/* 
Cerința
Se consideră un text cu cel mult 100 de caractere, în care cuvintele sunt formate din litere mari ale alfabetului englez și sunt separate prin câte un spațiu.

Scrieți un program care citește de la tastatură un text de tipul menționat mai sus și afișează pe ecran, pe câte un rând, cuvintele care cuprind cel puțin o notă muzicală. Dacă nu există astfel de cuvinte, se afișează pe ecran mesajul nu exista.

Date de intrare
Programul citește de la tastatură un text de tipul menționat.

Date de ieșire
Programul va afișa pe ecran, pe câte un rând, cuvintele care cuprind cel puțin o notă muzicală. Dacă nu există astfel de cuvinte, se afișează pe ecran mesajul nu exista.

Restricții și precizări
cuvintele vor fi afișate în ordinea din text
notele muzicale sunt DO, RE, MI, FA, SOL, LA, SI.
Exemplu:
Intrare

REMI DOMINO SI KHANHOO SUNT DENUMIRI DE JOCURI CE AU ASPECTE SIMILARE
Ieșire

REMI
DOMINO
SI
DENUMIRI
SIMILARE

*/

int main() {
    char pro[255];
    char A[20][20];
    char T[255];
    cin.getline(pro,255);
    strcat(pro," ");
    int p,k=0;
    while (strlen(pro) !=0) {
        p = strchr(pro,' ')-pro;
        strcpy(T,pro);
        T[p] = '\0';
        strcpy(A[k],T);
        strcpy(pro,pro+p+1);
        k++;
    }

    char B[20][20];
    strcpy(B[0],"DO"); 
    strcpy(B[1],"RE");
    strcpy(B[2],"MI");
    strcpy(B[3],"FA");
    strcpy(B[4],"LA");
    strcpy(B[5],"SOL");
    strcpy(B[6],"SI");
   
    for ( int i = 0 ; i< k;i++) {
        for (int j = 0; j <= 6; j++) {
            if (strstr(A[i],B[j]) != NULL) {
                cout << endl << A[i];
                break;
        }
    }
}

}