#include <iostream>

using namespace std;

int main()
{
    // se dau 2 vectori ordonati descrescator. Sa creeze al treilea vector cu elemenetele din primmii doi vectori, ordonat descrescator prin interclasare.

    int A[101], B[101], C[101], a, b, k = -1, c, M, N;
    cout << "N =";
    cin >> N;
    cout << "M =";
    cin >> M;

    for (a = 0; a < N; a++)
    {
        cout << "A[" << a << "]=";
        cin >> A[a];
    }

    for (b = 0; b < M; b++)
    {
        cout << "B[" << b << "]=";
        cin >> B[b];
    }

    a = 0;
    b = 0;
    while ((a < N) && (b < M))
    {
        if (A[a] > B[b])
        {
            k++;
            C[k] = A[a];
            a++;
        }
        else
        {
            k++;
            C[k] = B[b];
            b++;
        }
    } 
    if (a >= N)
    {
        while (b < M) {
        k++;
        C[k] = B[b];
        b++; }
    }
    else
    {
        while (a < N) {
        k++;
        C[k] = A[a];
        a++; }
    } 

    cout << "Primul vector este:";
    for (a = 0; a < N; a++)
    {
        cout << A[a] << " ";
    }
    cout << endl;

    cout << "Al doilea vector este:";
    for (b = 0; b < M; b++)
    {
        cout << B[b] << " ";
    }
    cout << endl;
    cout << "Al treilea vector este:";
    for (c = 0; c <= k; c++)
        cout << C[c] << " ";
    cout << endl;

    return 0;
}