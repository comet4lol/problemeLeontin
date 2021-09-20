//Scoate toti elevii unei clase la tabla aleatoriu, pana ii ascultam pe toti, fara sa asculti un elev de 2 ori.
#include <iostream>
using namespace std;

int main()
{
    int i, n, k=0, T;
    cout << "Cati elevi sunt in clasa?=";
    cin >> n;
    int v[n] = {0};
    while (k<n) {
        do {
            T = rand() % n + 1; 
        } while(v[T-1] != 0);
        cout << "L-am scos la tabla pe elevul numarul  " << T << endl; 
        v[T-1] = 1;
        k++;
    }
}
