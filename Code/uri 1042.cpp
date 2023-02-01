#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,x,y,z;
    cin>>a>>b>>c;
    if(a<b&&a<c)
    {
        x=a;
        if(b<c)
        {
            y=b;
            z=c;
        }
        else
        {
            y=c;
            z=b;
        }
    }
    else if(b<a&&b<c)
    {
        x=b;
        if(a<c)
        {
            y=a;
            z=c;
        }
        else
        {
            y=c;
            z=a;
        }
    }
    else if(c<b&&c<a)
    {
        x=c;
        if(b<a)
        {
            y=b;
            z=a;
        }
        else
        {
            y=a;
            z=b;
        }
    }
    cout<<x<<endl<<y<<endl<<z<<endl<<endl<<a<<endl<<b<<endl<<c<<endl;
    return 0;
}
