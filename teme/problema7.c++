#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int i, n, interval , k=0 , s=0;
    cout << "Cat de mare sa fie tabloul ?  ";
    cin >> n;
    cout << "Numarul pentru generare prin rand() ?  ";
    cin >> interval;
    int array[n];
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        array[i] = (rand() % interval);
        cout << array[i] << " , ";
        if (array[i] % 2 ==0) {
            s+=array[i];
            k++;
        }
    }
    cout << "]" << endl;
    int medie = (float) s/k;
    cout << "Media aritmetica   " << fixed << setprecision(2) << medie;
}