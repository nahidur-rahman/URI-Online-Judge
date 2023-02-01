#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a,b,c;
    cin>>a>>b>>c;
    if(a==0.0||((b*b)<4*a*c))
        cout<<"Impossivel calcular"<<endl;
    else
    {
        cout<<fixed<<setprecision(5)<<"R1 = "<<(-b+sqrt((b*b)-4*a*c))/(2*a)<<endl;
        cout<<fixed<<setprecision(5)<<"R2 = "<<(-b-sqrt((b*b)-4*a*c))/(2*a)<<endl;
    }
    return 0;
}
