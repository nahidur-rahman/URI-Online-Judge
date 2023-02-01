#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int a[n];
    a[0]=0;
    a[1]=1;
    if(n==1)
        cout<<a[0]<<endl;
    if(n==2)
        cout<<a[0]<<" "<<a[1]<<endl;
    if(n>=3)
    {
        cout<<a[0]<<" "<<a[1];
        for(i=2;i<n;i++)
        {
            cout<<" ";
            a[i]=a[i-1]+a[i-2];
            cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}
