#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    // Se dă o propoziție care conține numai litere mici ale alfabetului englez
    // și spații.Să se afișeze cuvintele din propoziție care conțin numai vocale.
    char sir[100];
    cout << "Introdu propozitia: ";
    cin.getline(sir, 100);
    char *bucata = strtok(sir, " ");
    while (bucata != NULL)
    {   
        bool sem = true;
        for ( int i = 0 ; i < strlen(bucata); i++) {
            if ((strchr(bucata, 'bcdefghjklmnpqrstvxyz'))) { // super primitiv :)
                sem = false;
            }
        }
        if ( sem == true) cout << bucata << endl;
        bucata = strtok(NULL, " ");
    }
}