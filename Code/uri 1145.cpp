#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,i;
    cin>>x>>y;
    for(i=1;i<=y;i++)
    {
        cout<<i;
        if(i%x!=0)
            cout<<" ";
        if(i%x==0)
            cout<<endl;
    }

    return 0;
}

