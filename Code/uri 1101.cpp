#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,a,b,i;
    while(1)
    {
        cin>>m>>n;
        if(m>0&&n>0)
        {
            if(m>n)
            {
                a=n;
                b=m;
            }
            else
            {
                a=m;
                b=n;
            }
            int sum=0;
            for(i=a;i<=b;i++)
            {
                sum=sum+i;
                cout<<i<<" ";
            }
            cout<<"Sum="<<sum<<endl;
        }
        else
            break;
    }
    return 0;
}
