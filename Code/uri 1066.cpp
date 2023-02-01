#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n[5],i,j,e=0,o=0,p=0,m=0;
    for(i=0;i<5;i++)
        cin>>n[i];
    for(j=0;j<5;j++)
    {
        if(n[j]%2==0)
            e++;
        if(n[j]%2!=0)
            o++;
        if(n[j]>0)
            p++;
        if(n[j]<0)
            m++;
    }
    cout<<e<<" valor(es) par(es)"<<endl;
    cout<<o<<" valor(es) impar(es)"<<endl;
    cout<<p<<" valor(es) positivo(s)"<<endl;
    cout<<m<<" valor(es) negativo(s)"<<endl;

    return 0;
}
