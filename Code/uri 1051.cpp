#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a,b;
    cin>>a;
    if(a<=2000)
        cout<<"Isento"<<endl;
    else if(a>2000&&a<=3000)
    {
        b=(a-2000)*.08;
        cout<<fixed<<setprecision(2)<<"R$ "<<b<<endl;
    }
    else if(a>3000&&a<=4500)
    {
        b=((1000*.08)+((a-3000)*.18));
        cout<<fixed<<setprecision(2)<<"R$ "<<b<<endl;
    }
    else if(a>4500)
    {
        b=((1000*.08)+(1500*.18)+((a-4500)*.28));
        cout<<fixed<<setprecision(2)<<"R$ "<<b<<endl;
    }

    return 0;
}
