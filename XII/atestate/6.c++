/*

Se da fisierul rez.txt  care contine pe fiecare linie 2 note si numele unui elev. 
Afisati in ordine descrescatoare toti elevii care au ambele note >= 5.

*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("rez.txt");
    char nume[100][100];
    int note1[100], note2[100];
    int elev = 0;
    while (fin >> note1[elev] >> note2[elev]) {
        fin.get();
        fin.get(nume[elev], 100);
        if (note1[elev] >= 5 && note2[elev] >= 5) {
            elev++;
        }
    }
    fin.close();
    for (int i = 0; i < elev; i++) {
        for (int j = 0; j < elev - 1 - i; j++) {
            if (note1[j] < note1[j + 1] || (note1[j] == note1[j + 1] && note2[j] < note2[j + 1])) {
                swap(nume[j], nume[j + 1]);
                swap(note1[j], note1[j + 1]);
                swap(note2[j], note2[j + 1]);
            }
        }
    }
    for (int i = 0; i < elev; i++) {
        cout << nume[i] << endl;
    }
    return 0;
}