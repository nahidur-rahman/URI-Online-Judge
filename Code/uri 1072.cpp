#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,in=0,out=0;
    cin>>t;
    int a[t];
    for(i=0;i<t;i++)
        cin>>a[i];
    for(j=0;j<t;j++)
    {
        if(a[j]>=10&&a[j]<=20)
            in++;
        else
            out++;
    }
    cout<<in<<" in"<<endl<<out<<" out"<<endl;

    return 0;
}
