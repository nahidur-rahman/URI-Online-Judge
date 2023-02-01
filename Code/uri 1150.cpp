#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,z,i,count=0,sum=0;
    cin>>x;
    while(1)
    {
        cin>>z;
        if(z>x)
            break;
    }
    for(i=x;i<=z;i++)
    {
        count++;
        sum=sum+i;
        if(sum>z)
            break;
    }
    cout<<count<<endl;
    return 0;
}
