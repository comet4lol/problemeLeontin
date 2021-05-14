//Sa se determine max dintre vectori si pe ce poziție apare
#include <iostream>
using namespace std;

int main()
{
    int max = 0, i, n, interval, pozitieMax;
    cout << "Cat de mare sa fie tabloul ?  ";
    cin >> n;
    cout << "Numarul pentru generare prin rand() ?  ";
    cin >> interval;
    int array[n];
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        array[i] = rand() % interval;
        cout << array[i] << " , ";
        if (array[i] >= max)
        {
            max = array[i];
            pozitieMax = i;
        }
    }
    cout << "]" << endl;
    cout << "Maximul este: " << max << "   pe pozitia :  " << pozitieMax;
}