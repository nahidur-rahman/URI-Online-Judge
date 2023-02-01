#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,alc=0,gas=0,dis=0;
    while(1)
    {
        cin>>a;
        if(a==1)
            alc++;
        if(a==2)
            gas++;
        if(a==3)
            dis++;
        if(a==4)
            break;
    }
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<alc<<endl;
    cout<<"Gasolina: "<<gas<<endl;
    cout<<"Diesel: "<<dis<<endl;
    return 0;
}
