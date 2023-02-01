#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x;
    float y;
    cin>>x>>y;
    if(x==1)
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<4*y<<endl;
    else if(x==2)
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<4.5*y<<endl;
    else if(x==3)
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<5*y<<endl;
    else if(x==4)
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<2*y<<endl;
    else if(x==5)
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<1.5*y<<endl;
    return 0;
}
