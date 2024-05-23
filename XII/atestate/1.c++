/*
Se da fisierul FR.IN, care contine pe fiecare linie doua numere naturale (<35000)
, reprezentand numaratorul respectiv numitorul unor fractii. Sa se creeze fisierul 
Fr.Out care contine pe fiecare rand numaratorii si numitorii 
fractiilor ireductibile rezultate prin simplificarea fractiilor din fisierul FR.IN.
*/

#include <iostream>
#include <fstream>

using namespace std;

ifstream f("f.txt");
ofstream g ("g.txt");


int main() {
    int x,y;
    while (!f.eof()) {
        f >> x;
        f >> y;
        if ( x == 1 || y == 1) continue;
        if ( y == 0 ) {
            cout << "Eroare!";
            break;
        }
        int k = 2, d;
        if ( x > y ) d = y;
        else d = x;
        while ( k < d+1) {
            while ( ( x % k == 0) && (y % k == 0 ) ) {
                x /= k;
                y /= k;
            }
            k++;
        }
        g << x;
        g << " ";
        g << y;
    }
}