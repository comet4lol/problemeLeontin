#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float numar;
    // float poate fi inlocuit si cu double
    cout << "Introdu un numar: ";
    cin >> numar;
    cout << fixed << setprecision(2) << numar;
}
