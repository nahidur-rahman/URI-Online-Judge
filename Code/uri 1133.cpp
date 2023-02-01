#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,a,b,i;
    cin>>x>>y;
    if(x<y)
    {
        a=x;
        b=y;
    }
    if(y<x)
    {
        a=y;
        b=x;
    }
    for(i=a+1;i<b;i++)
    {
        if(i%5==2||i%5==3)
            cout<<i<<endl;
    }
    return 0;
}
