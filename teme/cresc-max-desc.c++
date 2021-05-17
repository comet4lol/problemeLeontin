//Se citește în Vector cu N componente distincte. Sa se ordoneze pana la maxim crescător și de la maxim descrscator.
#include <iostream>
using namespace std;

int main()
{
    int i, n, interval, poz,j, aux, max = 0;
    cout << "Cat de mare sa fie tabloul ?  ";
    cin >> n;
    cout << "Numarul pentru generare prin rand() ?  ";
    cin >> interval;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        array[i] = rand() % interval;
        cout << array[i] << "\t";
        if (array[i] >= max)
        {
            poz = i;
            max = array[i];
        }
    }
    //cout << "poz=" << poz << endl;
    for (i = 0; i < poz; i++)
    {
        for (j = i + 1; j < poz; j++)
        {
            if (array[j] < array[i])
            {
                aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }
 /*   cout << "Crescator\n";
    for (i = 0; i < n; i++)
    {
        cout << array[i] << "\t";
    }
 */   
    cout << "\nSolutie:" << endl; 

    for (i = poz+1; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (array[j] > array[i])
            {
                aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << array[i] << "\t";
    }
}
