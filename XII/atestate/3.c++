#include <iostream>
#include <fstream>

using namespace std;

/*
Se considera fisierul A.TXT, care contine pe primul
 rand duoa numere intregi A si B separate prin spatiu, iar pe al doilea rand
  mai multe numere separate prin spatii. Sa se elimine din fisier numerele aflate in intervalul [A, B]
*/

ifstream f ("a.txt");
ofstream g ("b.txt");


int main () {
    int a,b,x;
    f >> a;
    f >> b;
    while ( !f.eof() ) {
      f >> x;
      if ( x <= b && x >= a) continue;
      g << x << " ";
    }

}