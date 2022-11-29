#include <iostream>
using namespace std;



int main() {
    struct complex
    {
        float re;
        float im;
    } z;
    cout << "Introdu partea reala: ";
    cin >> z.re;
    cout << "Introdu partea imaginara: ";
    cin >> z.im;
    int modul = z.re * z.re + z.im * z.im;
    cout << "Modulul este : " << modul;
}