#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float x,n[100];
    int i;
    cin>>x;
    for(i=0;i<100;i++)
    {
        n[i]=x;
        cout<<setprecision(4)<<fixed<<"N["<<i<<"] = "<<x<<endl;
        x=x/2;
    }
    return 0;
}
