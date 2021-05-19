// Sa se elimine linia L Dintr-o matrice
#include <iostream>

using namespace std;

int main()
{
    int i, j, M, N, interval, l, c;

    cout << "Cate linii?  ";
    cin >> M;
    cout << endl;

    cout << "Cate coloane?  ";
    cin >> N;
    cout << endl;

    cout << "Din ce interval sa luam valori?  ";
    cin >> interval;
    cout << endl;

    int A[M][N] ={0};

    for (i = 0; i < M; i++) // generare matrice
    {
        for (j = 0; j < N; j++)
        {
            A[i][j] = rand() % interval;
        }
    }
    for (i = 0; i < M; i++) // afisare matrice
    {
        for (j = 0; j < N; j++)
        {
            cout << "\t" << A[i][j] << "  ";
        }
        cout << "\n \n";
    }
    cout << endl;
    cout << "Introdu linia care doresti sa fie stearsa (1, " << M << ")="; 
    cin >> l;
    cout << endl;

    for (int i = l-1; i < M; i++) // stergere linie
    {
        for (int j = 0; j < N; j++)
        {
            A[i][j] = A[i+1][j];
        }
    }
    M--; // marcam ca am sters o linie
    cout << endl;
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            cout << "\t" << A[i][j] << "  ";
        }
        cout << "\n \n";
    }
    cout << endl;
    cout << "Introdu coloana care doresti sa fie stearsa (1, " << N << ")=";
    cin >> c;
    cout << endl;

    for (int i = 0; i < M; i++) // stergere linie
    {
        for (int j = c-1; j < N; j++)
        {
            A[i][j] = A[i][j+1];
        }
    }
    N--; // marcam ca am sters o coloana

    cout << endl;
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            cout << "\t" << A[i][j] << "  ";
        }
        cout << "\n \n";
    }
}