#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d;
    if(a<c)
        e=((c*60)+d)-((a*60)+b);
    else if(a==c)
    {
        if(b<d)
            e=((c*60)+d)-((a*60)+b);
        else
            e=(24*60)+((c*60)+d)-((a*60)+b);
    }
    else
        e=(24*60)+((c*60)+d)-((a*60)+b);
    cout<<"O JOGO DUROU "<<e/60<<" HORA(S) E "<<e%60<<" MINUTO(S)"<<endl;

    return 0;
}
