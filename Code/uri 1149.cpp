#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,n,i,sum=0;
    cin>>a;
    AGAIN:
    cin>>n;
    if(n<=0)
        goto AGAIN;
    for(i=1;i<=n;i++)
    {
        sum=sum+a;
        a++;
    }
    cout<<sum<<endl;
    return 0;
}
