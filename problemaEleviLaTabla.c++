//  Sa se scrie un program care scoata toti elevi la tabla pana ce ii ascultam pe toti.
//  Fara a asculta un elev de doua ori.
#include <iostream>
using namespace std;

int main()
{
    int i, n, interval;
    cout << "Cati elevi sunt in clasa?  ";
    cin >> n;

    int array[n] = {0};
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " , ";
    }
    cout << "]" << endl;

    int t;
    i=0;
    int k = 0;

    do {
        t = (rand() % n) +1;
        // cout << array[t] << endl;
        if (array[t] == 0) {
            cout <<  "Iese elevul cu numarul : " << t << endl;
            k++;
        }
        array[t] = 1; 
    } while( k < n);
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " , ";
    }
}