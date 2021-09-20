#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int arr[20], i, n;
    cout << "Cat elemente are tabloul nostru?";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        //citire
        cout << 'arr[' << i << ']=';
        cin >> arr[i];
        // SAU
        //generare
        //arr[i] = rand() % 20; // genereaza nr aleatorii din interavalul 0-20;
    }
}
