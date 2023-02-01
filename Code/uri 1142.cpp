#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,x=1,y=2,z=3;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<x<<" "<<y<<" "<<z<<" "<<"PUM"<<endl;
        x=x+4;
        y=y+4;
        z=z+4;
    }
    return 0;
}
