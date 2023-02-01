#include<iostream>
using namespace std;

int main()
{
    int n[10],x,i;
    cin>>x;
    for(i=0;i<10;i++)
    {
        n[i]=x;
        cout<<"N["<<i<<"] = "<<n[i]<<endl;
        x=x*2;
    }
    return 0;
}
