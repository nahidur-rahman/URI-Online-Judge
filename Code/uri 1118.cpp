#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    float x,y,avg;
    START:
    while(1)
    {
        AGAIN_1:
        cin>>x;
        if(x<0||x>10)
        {
            cout<<"nota invalida"<<endl;
            goto AGAIN_1;
        }
        AGAIN_2:
        cin>>y;
        if(y<0||y>10)
        {
            cout<<"nota invalida"<<endl;
            goto AGAIN_2;
        }
        avg=(x+y)/2.0;
        cout<<fixed<<setprecision(2)<<"media = "<<avg<<endl;
        AGAIN_3:
        cout<<"novo calculo (1-sim 2-nao)"<<endl;
        cin>>a;
        if(a==1)
            goto START;
        else if(a==2)
            break;
        else
            goto AGAIN_3;
    }
    return 0;
}
