#include <iostream>

using namespace std;


/*
Se citesc de la tastatura perechi de numere intregi, cat timp nu s-a introdus perechea (0,0). 
Determinati cate dintre perchile citite au proprietatea ca cel mai mare divizor comun al 
elementelor perechii este divizibil cu 5. 
Sa se utilizeze o functie pentru determinarea celui mai mare divizor comun a doua numere date ca parametru.
*/

int cmmdc ( int a, int b ) {
    if ( a > b) a-=b;
    else if (b -=a);
    else if ( b == a) {
        return a;
    }
}

int main() {
    int x, y, k = 0;
    cout << "Introdu X si Y: ";
    cin >> x;
    cin >> y;
    int z = cmmdc(x,y);
    if (z%5 == 0) k++;
    while(x!=0 && y!=0) {
        if ( z % 5 == 0) k++;
        cin >> x;
        cin >> y;
        z = cmmdc(x,y);
    }
    cout << "Perechi cu cmmdc divizibile cu 5 = " << k;
}