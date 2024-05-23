
/*
c++ //SUBIECTUL 21

    De la tastatura se citesc doua siruri de caractere. 
Primul sir s contine maxim 255 caractere care pot fi litere mici sau spatii, 
iar cel de-al doilea sir c, contine maxim 20 caractere. 
Sa se inlocuiasca fiecare aparitie a sirului c in sirul s cu cate un sir format din caractere *, 
avand aceasi lungime ca si sirul c.
*/


#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[256], c[21], aux[256], *t;
    int i;

    cin.getline(s, 256);
    cin.getline(c, 21);

    t = strstr(s, c);
    while (t)
    {
        strcpy(aux, t + strlen(c));
        for (i = 0; i < strlen(c); i++) t[i] = '*';
        t = strstr(t + 1, c);
    }
    cout << s;
}