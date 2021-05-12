//  Sa se scrie un program care scoata toti elevi la tabla pana ce ii ascultam pe toti.
//  Fara a asculta un elev de doua ori.
#include <iostream>
using namespace std;

int main()
{
    int i, n, interval, t , k=0, i=0;
    cout << "Cati elevi sunt in clasa?  ";
    cin >> n;
    int array[n] = {0};
    do {
        t = (rand() % n) +1;
        if (array[t] == 0) {
            cout <<  "Iese elevul cu numarul : " << t << endl;
            k++;
            array[t] = 1; 
        }
    } while( k < n);
}