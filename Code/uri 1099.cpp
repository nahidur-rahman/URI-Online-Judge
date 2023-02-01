#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,a,b,i;
    cin>>n;
    while(n--)
    {
        int sum=0;
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
        for(i=a+1;i<b;i++)
            if(i%2!=0)
                sum=sum+i;
        cout<<sum<<endl;
    }
    return 0;
}
