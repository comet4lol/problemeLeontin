// Se da un tablou cu N componente intre oricare doua elemente  vecine
// Sa se introduca o componenta care contine suma vecinilor
#include <iostream>
using namespace std;

int main()
{
    int i, n, interval;
    cout << "Cat de mare sa fie tabloul ?  ";
    cin >> n;
    cout << "Numarul pentru generare prin rand() ?  ";
    cin >> interval;
    n = n*2;
    int array[n] = {0};
    cout << "[";
    for (int i = 0; i < n; i++)
    {   
        if ( i % 2 == 0) {
            array[i] = (rand() % interval);
        }
        cout << array[i] << " , ";
    }
    cout << "]" << endl;
    cout << "[";
    for (int i = 0; i < n ; i++) {
        if (array[i] = 0 ) {
            array[i] = array[i+1] + array[i-1];
        }
        cout << array[i] << " , ";
    }
    cout << "]" << endl;

}
