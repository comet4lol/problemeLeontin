#include <iostream>
using namespace std;

int main()
{
    int t, index;
    char litera;
    string sirInitial;
    string sirFinal;
    cout << "Cat este T? ";
    cin >> t;

    for (int index = 0; index < t; index++)
    {
        cout << "Introdu o litera din sir: ";
        cin >> litera;
        sirInitial = sirInitial + litera;
        sirFinal = litera + sirFinal;
    }

    if (sirInitial == sirFinal)
    {
        cout << "Da! Sirul este un palindrom";
    }
    else
    {
        cout << "Nu! Sirul nu este un palindrom";
    }
}