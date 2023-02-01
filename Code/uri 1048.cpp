#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a,b;
    int c;
    cin>>a;
    if(a>0&&a<=400)
    {
        c=15;
        b=a*.15;
    }
    else if(a>400&&a<=800)
    {
        c=12;
        b=a*.12;
    }
    else if(a>800&&a<=1200)
    {
        c=10;
        b=a*.10;
    }
    else if(a>1200&&a<=2000)
    {
        c=7;
        b=a*.07;
    }
    else if(a>2000)
    {
        c=4;
        b=a*.04;
    }
    cout<<fixed<<setprecision(2)<<"Novo salario: "<<(a+b)<<endl;
    cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<b<<endl;
    cout<<"Em percentual: "<<c<<" %"<<endl;

    return 0;
}
