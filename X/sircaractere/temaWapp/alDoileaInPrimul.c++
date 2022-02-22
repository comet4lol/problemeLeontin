#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char S1[100], S2[100], T[100];
    char *A;
    int k = 0, sem = 1;
    cout << "sir1: ";
    cin.getline(S1, 100);
    cout << endl;
    cout << "sir2: ";
    cin.getline(S2, 100);
    cout << endl;

    while (sem)
    {
        if (strstr(S1, S2) != NULL)
        {
            k++;
            A = strstr(S1, S2);
            strcpy(S1, A + strlen(S2));
        }
        else
            sem = 0;
    }

    cout << k;
}