#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(j=0;j<n;j++)
    {
        if(a[j]==0)
            cout<<"NULL"<<endl;
        else if(a[j]%2==0)
        {
            if(a[j]>0)
                cout<<"EVEN POSITIVE"<<endl;
            else
                cout<<"EVEN NEGATIVE"<<endl;
        }
        else if(a[j]%2!=0)
        {
            if(a[j]>0)
                cout<<"ODD POSITIVE"<<endl;
            else
                cout<<"ODD NEGATIVE"<<endl;
        }
    }

    return 0;
}
