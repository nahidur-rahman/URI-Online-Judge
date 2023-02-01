#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,a,b,i,sum=0;
    cin>>x>>y;
    if(x>y)
    {
        a=y;
        b=x;
    }
    else
    {
        a=x;
        b=y;
    }
    for(i=a;i<=b;i++)
        if(i%13!=0)
            sum=sum+i;
    cout<<sum<<endl;
    return 0;
}
