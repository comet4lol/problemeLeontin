
#include <iostream>

using namespace std;

int main()
{

    int pozitieActuala = -1, dim, raspuns,nrElemente = 0, primuVenit = 0, sem = 1;
    cout << "Dimensiunea maxima a stivei? ";
    cin >> dim;
    int V[dim];
    if (dim > 0) {
        while (sem) {
            cout << "\n Alege una dintre optiuni:";
            cout << "\n 1 : Adaugarea elementelor";
            cout << "\n 2 : Afisarea elementelor";
            cout << "\n 3 : Stergerea unui element (primu venit)";
            cout << "\n 4 : Iesire din meniu\n";
            cin >> raspuns;
            switch (raspuns) {
                case 1: {
                    if (nrElemente < dim) {
                        if (pozitieActuala < dim-1) {
                            pozitieActuala++;
                        } else {pozitieActuala = 0;}
                        cout << "Introdu un numar \n";
                        cin >> V[pozitieActuala];
                        nrElemente++;
                    } else {cout << "Coada este plina! \n";}
                break;
                }
                
                case 2: {
                    if (nrElemente > 0) {
                        if (pozitieActuala >= primuVenit) {
                            cout << "\n[ ";
                            for(int i = primuVenit; i <= pozitieActuala; i++) {
                                cout << V[i] << ",  ";
                            } 
                            cout << "]\n"; 
                        } else {
                            cout << "[ ";
                            for (int i = 0; i <= pozitieActuala; i++) {
                                cout << V[i] << ",  ";
                            }
                            for (int i = primuVenit; i < dim; i++) {
                                cout << V[i] << ",  ";
                            }
                            cout << "]\n asta e al doilea";
                        }
                    } else {cout << "Nu exista elemente!";}
                    break;
                }

                case 3: {
                    if (nrElemente > 0) {
                        if (primuVenit < dim) {
                            primuVenit++;
                        } else {primuVenit = 0; pozitieActuala--;}
                        cout << "Am eliminat!";
                        nrElemente--;
                    } else {cout << "Nu exista elemente!";}
                    break;
                }

                case 4: {
                    cout << "Zi faina!";
                    sem = 0;
                    break;
                }
                default: {
                cout << "Introdu un numar intre 1 si 4:";
                break;
                }
            }
        } 

    } else cout << "Nu se poate :(";
    
    return 0;
}