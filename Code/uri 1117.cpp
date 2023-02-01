#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a,b,avg;
    while(1)
    {
        cin>>a;
        if(a>=0&&a<=10)
            break;
        else
            cout<<"nota invalida"<<endl;
    }
    while(1)
    {
        cin>>b;
        if(b>=0&&b<=10)
            break;
        else
            cout<<"nota invalida"<<endl;
    }
    avg=(a+b)/2;
    cout<<fixed<<setprecision(2)<<"media = "<<avg<<endl;

    return 0;
}
