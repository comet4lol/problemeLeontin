#include <iostream>

using namespace std;

/*Se citesc n numere naturale. Sa se numere cate dintre ele au cifra sutelor egala cu 3 si sa se calculeze suma numerelor care au toate cifrele in ordine crescatoare.*/

int main()
{
    int n, x, sem, aux, k=0, i;
    
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x;
        if(x/100%10==3)
        {
            aux=x; sem=1;
            while(aux>9 && sem)
            {
                if(x%10<x/10%10) sem=0;
                aux/=10;
            }
            if(sem) k++;
        }
    }
    cout<<k;
}