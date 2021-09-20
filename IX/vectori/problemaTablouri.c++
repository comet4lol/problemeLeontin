// Sa se citeasca un tablou , apoi sa se scrie cate numere sunt pare si cate nr sunt impare;
#include <iostream>
using namespace std;

int main()
{
    int n, i, interval, numerePare = 0, numereImpare = 0;
    cout << "Cat de mare sa fie tabloul ?  ";
    cin >> n;
    cout << "Numarul pentru generare prin rand() ?  ";
    cin >> interval;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        array[i] = rand() % interval;
        if (array[i] % 2 == 0)
        {
            numerePare++;
        }
        else
        {
            numereImpare++;
        }
    }
    //verificare:
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]=" << array[i] << endl;
    }
    cout << "Numarul de valori pare :   " << numerePare << endl;
    cout << "Numarul de valori impare :  " << numereImpare;
}