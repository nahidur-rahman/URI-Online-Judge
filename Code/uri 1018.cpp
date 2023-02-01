#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c,d,e,f,g,h,i,j,k,m,n;
    cin>>a;
    b=a/100;
    c=a%100;
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
    cout<<a<<endl;
    cout<<b<<" nota(s) de R$ 100,00"<<endl;
    cout<<d<<" nota(s) de R$ 50,00"<<endl;
    cout<<f<<" nota(s) de R$ 20,00"<<endl;
    cout<<h<<" nota(s) de R$ 10,00"<<endl;
    cout<<j<<" nota(s) de R$ 5,00"<<endl;
    cout<<m<<" nota(s) de R$ 2,00"<<endl;
    cout<<n<<" nota(s) de R$ 1,00"<<endl;
    return 0;
}
