#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

/*Fisierul ‘Alocatii.txt’ contine mai multe linii. Fiecare linie contine valoarea alocatiei pe care o are in cont un elev si numele elevului. Sa se afiseze numele elevului (elevilor) cu cea mai mare valoare a alocatiei si sa se determine numarul elevilor cu alocatia 0 lei.*/

int main()
{
    char nume[100];
    int max, x, k=0;
    
    ifstream f("Alocatii.txt");
    f>>max>>nume;
    if(max==0) k++;
    while(!f.eof())
    {
        f>>x>>nume;
        if(x>max) max=x;
        if(x==0) k++;
    }
    f.close();
    ifstream g("Alocatii.txt");
    while(!g.eof())
    {
        g>>x>>nume;
        if(x==max) cout<<nume<<" ";
    }
    cout<<endl<<"Sunt "<<k<<" elevi cu alocatia 0 lei";
    g.close();
    return 0;
}