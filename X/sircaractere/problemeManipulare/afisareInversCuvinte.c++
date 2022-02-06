#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[101];
    cin.getline(s, 100);
    char *cuvant = strtok(s, " ");
    while(cuvant != NULL){
        cout << cuvant << " ";
        cout << strrev(cuvant) << " ";
        cuvant = strtok(NULL, " ");
    }
    return 0;
} // credits: sile camataru