#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,grenais=0,inter=0,gremio=0,empates=0;
    START:
    while(1)
    {
        cin>>a>>b;
        grenais++;
        if(a>b)
            inter++;
        else if(b>a)
            gremio++;
        else if(a==b)
            empates++;
        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        cin>>c;
        if(c==1)
            goto START;
        else if(c==2)
            break;
    }
    cout<<grenais<<" grenais"<<endl;
    cout<<"Inter:"<<inter<<endl;
    cout<<"Gremio:"<<gremio<<endl;
    cout<<"Empates:"<<empates<<endl;
    if(inter>gremio)
        cout<<"Inter venceu mais"<<endl;
    else if(gremio>inter)
        cout<<"Gremio venceu mais"<<endl;
    else if(inter==gremio)
        cout<<"Não houve vencedor"<<endl;
    return 0;
}
