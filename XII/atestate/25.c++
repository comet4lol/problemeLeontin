#include <iostream>
#include <cstring>

using namespace std;


int main()
{
    /*Se citeste un text S. Afisati cuvintele care au mai mult de T caractere si contin caracterul C. 
    Obs. S, T, C se citesc de la tastatura si textul e introdus corect.*/
    char S[200],C;
    int T;
    cout << "Introdu sirul:";
    cin.getline(S,199);
    cout<<"T caractere = ";
    cin>>T;
    cout<<"Caracterul C = ";
    cin>>C;
    

    char *bucata = strtok(S, " ");
    while (bucata != NULL)
    {   
        if (strlen(bucata) > T && strchr(bucata, C)) {
                cout << bucata << endl;
        }

        bucata = strtok(NULL, " ");
    }

}