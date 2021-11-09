// Se citeste un tablou, sa se afiseze toate numerele triplete consecutive
// (dupa pozitie) care pot reprezenta laturile unui triunghi isoscel
// ex : 1 2 2 3 6 5 8 4 4 5 3
// ex : 1 2 2 , 4 4 5 

#include <iostream>

using namespace std;

int main()
{
    int i, j, n, aux, c, interval, max;

    cout << "Cat de mare sa fie tabloul ?  ";
    cin >> n;
    // cout << "Numarul pentru generare prin rand() ?  ";
    // cin >> interval;
    int v[n], x[10] = {0};
    for (int i = 0; i < n; i++)
    {
        // v[i] = rand() % interval;
        cout << "V[ " << i << "] = ";
        cin >> v[i];
        cout << endl;
    }

    cout << "[";

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " , ";
    }
    cout << "]";
    // < n - 2    la fel cu  <= n - 3 
    for (int i = 0 ; i < n-2; i++) {
        int x = v[i];
        int y = v[i+1];
        int z = v[i+2];

        if ( (x==y) && (y==z) ) {
            continue;
        } else if ( (x==y) || (x==z) || (z==y)) {
            cout << endl;
            cout << "Triplet gasit pe pozitiile : " << i << " , " << i+1 << " , " << i+2;
        } 

    }    
}
