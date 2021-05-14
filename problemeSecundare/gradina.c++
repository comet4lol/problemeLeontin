#include <iostream>
using namespace std;

int main()
{
    int porci, gaini, totalPicioare;
    cout << "Cati porci sunt? ";
    cin >> porci;
    cout << "Cate gaini sunt? ";
    cin >> gaini;
    totalPicioare = porci * 4 + gaini * 2 + 2;
    cout << "Numarul de picioare   ";
    cout << totalPicioare;
}