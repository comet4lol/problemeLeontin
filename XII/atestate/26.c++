#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    /*Se citeste un sir de caractere. 
    Sa se codifice astfel incat fiecare litera mica sa fie inlocuita cu caracterul care are codul ASCII cu 2 mai mare decat al lui, iar cifrele cu 3 mai putin */
    char s[200];
    cin.getline(s,199);
    for(int i=0;i<strlen(s);i++)
    {
        if(islower(s[i]))
        {
            s[i]=s[i]+2;
        }
        if(isdigit(s[i]))
        {
            s[i]=s[i]-3;
        }
    }
    cout<<s;
}