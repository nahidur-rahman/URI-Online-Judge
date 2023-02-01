#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b,c,d,e,f,g,h,i,j,k,m,n,x,z;
    double a,y,xx;
    cin>>a;
    x=(int)a;
    b=x/100;
    c=x%100;
    d=c/50;
    e=c%50;
    f=e/20;
    g=e%20;
    h=g/10;
    i=g%10;
    j=i/5;
    k=i%5;
    m=k/2;
    n=k%2;

    xx=(float)x;
    y=a-xx;

    z=100*y;

    cout<<"NOTAS:"<<endl;
    cout<<b<<" nota(s) de R$ 100.00"<<endl;
    cout<<d<<" nota(s) de R$ 50.00"<<endl;
    cout<<f<<" nota(s) de R$ 20.00"<<endl;
    cout<<h<<" nota(s) de R$ 10.00"<<endl;
    cout<<j<<" nota(s) de R$ 5.00"<<endl;
    cout<<m<<" nota(s) de R$ 2.00"<<endl;

    cout<<"MOEDAS:"<<endl;
    cout<<n<<" moeda(s) de R$ 1.00"<<endl;
    cout<<z/50<<" moeda(s) de R$ 0.50"<<endl;
    z=z%50;
    cout<<z/25<<" moeda(s) de R$ 0.25"<<endl;
    z=z%25;
    cout<<z/10<<" moeda(s) de R$ 0.10"<<endl;
    z=z%10;
    cout<<z/5<<" moeda(s) de R$ 0.05"<<endl;
    z=z%5;
    cout<<z<<" moeda(s) de R$ 0.01"<<endl;

    return 0;
}
