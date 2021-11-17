

#include <iostream>

using namespace std;

int main()
{
    // queue menu
    int k=-1,dim,raspuns;
    cout << "Dimensiunea maxima a stivei? ";
    cin >> dim;
    int V[dim];
    if ( dim >  0 ){
        do {
            cout << " 1 : Adaugarea elementelor (push)" << endl;
            cout << " 2 : Afisarea elementelor" << endl;
            cout << " 3 : Stergerea ultimului element (pop)" << endl;
            cout << " 4 : Iesire din meniu" << endl;

            cin >> raspuns;
            switch (raspuns) {
                case 1: {
                    if ( k < dim -1) {
                        cout << "Introdu valoarea  " << endl;
                        k++;
                        cin >> V[k];
                    } else cout << "Coada plina !" << endl;
                    break;
                }
                case 2: {
                    if ( k > -1) {
                        cout << "Elementele cozii sunt: " << "[ ";
                        for ( int i = 0; i <= k; i++) {
                            cout << V[i] << " , ";
                        }
                        cout << " ] " << endl;
                    } else cout << "Nu sunt elemente! " << endl;
                    break;
                }
                case 3: {
                   if ( k > -1) {
                       k--;
                       cout << "L-am sters pe " << V[k+1] << endl;
                   } else cout << "Nu sunt elemente! " << endl;
                    break;
                }
                case 4: {
                        cout << "Pa! ";
                        break;
                }
                default: {
                    cout << "Eroare! Incearca din nou..." << endl;
                    break;
                } 
            }
        } while ( raspuns != 4);
    } else cout << "Nu se poate ! >:( ";
   

    return 0;
}
