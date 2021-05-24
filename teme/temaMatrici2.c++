// Se da o matrice , sa se construiasca un vector cu numerele prime (a)
// Sa se afiseze in ordine crescatoare numerele din vector (b)
// Sa se stearga cel mai din dreapta numar care are ultima cifra 
// valoarea 3 (c)

#include <iostream>

using namespace std;

int main()
{
    int i, j, t, M, N, interval;

    cout << "Cate linii?  ";
    cin >> M;
    cout << endl;

    cout << "Cate coloane?  ";
    cin >> N;
    cout << endl;

    cout << "Din ce interval sa luam valori?  ";
    cin >> interval;
    cout << endl;

    int A[M][N];

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {

            A[i][j] = rand() % interval;
        }
    }
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            cout << A[i][j] << "\t";
        }
        cout << "\n \n";
    }
    int X[M*N];
    int k=0,sem=1;

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            sem=1;
            for (t = 2; t <= A[i][j] / 2; t++) {
                if (A[i][j] % t == 0) {
                    sem=0;
                    break;
                }
            }
            if (sem && A[i][j] != 0)
            {
                X[k] = A[i][j];
                k++;
            }
        }
    }

    cout << "Vectorul X cu numere prime este:" << endl;
    for (i = 0; i < k; i++)
    {
        cout << X[i] << "\t";
    }

    int aux;
    
    for (int i = 0; i < k-1; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (X[i] > X[j])
            {
                aux = X[i];
                X[i] = X[j];
                X[j] = aux;
            }
        }
    }

    cout << "\nVectorul X sortat crescator este:" << endl;
    for (i = 0; i < k; i++)
    {
        cout << X[i] << "\t";
    }
    sem=1;

    for (i=k; k>=0; i--) {
        if (X[i] % 10 == 3) {
            for (j = i; j < k; j++) {
                X[j] = X[j+1];
            }
        k--;
        sem=0;
        break;
        }
    }
    if (sem) {
        cout << "\nNu exista nici un numar cu ultima cifra 3.";
    }
    else {
        cout << "\nVectorul X fara numarul cel mai din dreapta cu ultima cifra 3:" << endl;
        for (i = 0; i < k; i++)
        {
            cout << X[i] << "\t";
        }
    }
}