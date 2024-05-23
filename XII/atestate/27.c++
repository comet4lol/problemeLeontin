#include <iostream>
#include <cstring>

using namespace std;


int main()
{
    /* Se citeste un sir S. Precizati pentru fiecare vocala numarul de aparitii. 
    Sirul se presupune ca este format doar din litere mici */
    int F[256];
    char S[100];
    F['a']=0; F['e']=0; F['i']=0; F['o']=0; F['u']=0;
    cin.getline(S,99);
    for(int j=0;j<strlen(S);j++)
    {
        if(S[j]=='a')
        {
            F['a']++;
        }
        if(S[j]=='e')
        {
            F['e']++;
        }
        if(S[j]=='i')
        {
            F['i']++;
        }
        if(S[j]=='o')
        {
            F['o']++;
        }
        if(S[j]=='u')
        {
            F['u']++;
        }
    }
    cout<<"a="<<F['a']<<endl;   cout<<"e="<<F['e']<<endl;   cout<<"i="<<F['i']<<endl;   cout<<"o="<<F['o']<<endl;   cout<<"u="<<F['u']<<endl;
}