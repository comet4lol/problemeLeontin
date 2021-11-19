#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("sum.in");
ofstream fout("sum.out");

int main()
{
    int a, b;
    fin >> a >> b;
    fin.close();

    fout << a+b;
    fout.close();

    return 0;
}