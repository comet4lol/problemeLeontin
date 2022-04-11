#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    // Se citeste un text. Sa se elimine spatiile inainte de "." sau de "," sau spatiile duble.
    // ex : "  abc  def  ,  ghi" devine "abc def, ghi"
    char sir[50], aux[50];
    cout << "Introdu textul: ";
    cin.getline(sir, 50);

    for (int i = 0; i < strlen(sir); i++)
    {
            if (int(sir[i]) == 32 && (strchr(" ,.", sir[i + 1])))
            {
                strcpy(aux, sir + i + 1);
                strcpy(sir + i, aux);
            }
    }
    cout << "Rezultat : " << sir;
}
