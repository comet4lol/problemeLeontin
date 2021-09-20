#include <iostream>
using namespace std;

int main()
{
    int n, i, j, aux, interval;
    cout << "Cat de mare sa fie tabloul ?  ";
    cin >> n;
    cout << "Numarul pentru generare prin rand() ?  ";
    cin >> interval;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        array[i] = rand() % interval;
        cout << array[i] << endl;
    }
    // formare mai sus
    i = 0;
    j = n - 1;
    cout << "Inversul este :   " << endl;
    while (i < j)
    {
        aux = array[i];
        array[i] = array[j];
        array[j] = aux;
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
        cout << array[i] << endl;
}