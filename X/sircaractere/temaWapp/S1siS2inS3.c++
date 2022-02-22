// Se da S1 si S2, sa se inlocuiasca S1 cu S2 in S3
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char S1[100], S2[100], S3[100],aux[100];
    int p;
    int k;

    cin.getline(S1,100);
    cin.getline(S2,100);
    cin.getline(S3,100);

    while (strstr(S3,S1) !=0)
        {
            p = strstr(S3,S1)-S3;
            strcpy(aux,S3+p+strlen(S1));
            strncpy(strstr(S3,S1),S2,99);
            strcpy(S3+strlen(S3),aux);
        }
    cout<<S3;
}