#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,d,e,f,g,h;
    cin>>a>>b>>c;
    d=0.5*a*c;
    e=3.14159*c*c;
    f=0.5*(a+b)*c;
    g=b*b;
    h=a*b;
    cout<<fixed<<setprecision(3)<<"TRIANGULO: "<<d<<endl<<"CIRCULO: "<<e<<endl<<"TRAPEZIO: "<<f<<endl<<"QUADRADO: "<<g<<endl<<"RETANGULO: "<<h<<endl;
    return 0;
}
