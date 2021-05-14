// Sa se scrie un program care numara elementele pozitive , negative si respectiv 
// nul dintr-un vector ,parcurgandu-l o singura data.
#include <iostream>
using namespace std;

int main() {
    int i, n, interval,pozitive=0,negative=0,nule=0;
    cout << "Cat de mare sa fie tabloul ?  ";
    cin >> n;
    cout << "Numarul pentru generare prin rand() ?  ";
    cin >> interval;
    int array[n];
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        array[i] = (rand() % interval) - (interval / 2);
        cout << array[i] << " , ";
        if ( array[i] > 0 ) pozitive++;
        if ( array[i] < 0 ) negative++;
        if ( array[i] == 0 ) nule++;
    }
    cout << "]" << endl;
    cout << "Raport : " << endl;
    cout << negative << "- numere negative  " <<  endl;
    cout << pozitive << "- numere poztive   " << endl;
    cout << nule <<  "- numere nule   " << endl;

}