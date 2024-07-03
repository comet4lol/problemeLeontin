#include <iostream>
#include <string.h>
using namespace std;

/* 
Fișierul de intrare sortcuv.in conține pe prima linie o 
propoziție alcătuită din litere mici ale alfabetului englez și spații.

Fișierul de ieșire sortcuv.out va conține cuvintele din propoziție,
ordonate alfabetic, fiecare pe câte o linie.

!
propoziția va conține cel mult 250 de caractere;
fiecare cuvânt din propoziție are cel mult 20 litere
!
ex : 

dreptunghiul este un paralelogram cu un unghi drept

cu
drept
dreptunghiul
este
paralelogram
un
un
unghi
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
    for ( int i = 0 ; i < k-1; i++) {
        for ( int j = i+1 ; j < k;j++) {
            if ( strcmp( A[i], A[j]) > 0 ) { 
                strcpy(T,A[i]);
                strcpy(A[i],A[j]);
                strcpy(A[j],T);
            }
        }
    }
    for ( int i = 0 ; i< k;i++) {
        cout << endl << A[i];
}

}