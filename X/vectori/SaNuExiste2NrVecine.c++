// Se citeste un  vector, sa se prelucreze a.i. sa nu exste 2 nr. vecine egale
// Varianta 2: Creeaza un alt vector

#include <iostream>

using namespace std;

int main ()
{
int i,j,n,k=0,interval,T;

cout << "Cat de mare sa fie tabloul ?  ";
cin >> n;
cout << "Numarul pentru generare prin rand() ?  ";
cin >> interval;
int v[n];
int x[k];
    for (int i = 0; i < n; i++)
    {
        v[i] = rand() % interval;
    }

    cout << "[";

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " , ";
    }
    cout << "]";

k = 1;
i = 0;
x[i] = v[i];


for (i = 1; i< n; i++)
{

if (v[i] != v[i-1])
{
    k++;
    x[k-1] = v[i];
}

}
cout << endl;
cout << "[";

for (int i = 0; i < k; i++)
{
    cout << x[i] << " , ";
}
cout << "]";
}