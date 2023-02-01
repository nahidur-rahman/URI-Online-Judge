#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float a,b,c,d;
    cin>>a>>b>>c;
    d=((a*2)+(b*3)+(c*5))/10;
    cout<<fixed<<setprecision(1)<<"MEDIA = "<<d<<endl;
    return 0;
}
