#include <iostream>
using namespace std;
// http://www.math.md/school/rubrica/prog/prog.html
// cauta definitia 1 si 2 
//Definitia 1. Sirul numeric (an)n Î N se numeste progresie aritmetica, daca exista un numar real d, numit ratia progresia, astfel incat
// a[n+1]- a[n] = d,
// (1)
// adica daca fiecare termen al sirului (incepand cu al doilea) este egal cu precedentul plus unul si acelasi numar (ratia).
int main() {
    int i, n;
    cout << "Cat de mare sa fie tabloul ?  " << endl;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]=";
        cin >> array[i];
    }
    int const ratieAritmetica = array[1] - array[0];
    bool semaforAritmetica = true;
    int const ratieGeometrica = array[1] / array[0];
    bool semaforGeometrica = true;
    for ( int i = 0 ; i < n-1;i++) {
        if ( array[i+1] - array[i] != ratieAritmetica) {
            semaforAritmetica = false;
        }
    }
    if (semaforAritmetica == false) {
        for ( int i = 0; i< n-1; i++) {
            if ( array[i+1] / array[i] != ratieGeometrica) {
                 semaforGeometrica = false;
            } 
        }
    }
    if (semaforAritmetica) { 
        cout << "Vectorul este progresie aritmetica ! ";
    } else if (semaforGeometrica) {
        cout << "Vectorul este progresie geometrica ! ";
    } else {
        cout << "Vectorul este nici progresie aritmetica , nici progresie geometrica! ";
    }
}