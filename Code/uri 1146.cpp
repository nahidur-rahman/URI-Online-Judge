#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,i;
    while(1)
    {
        cin>>x;
        for(i=1;i<=x;i++)
        {
            cout<<i;
            if(i!=x)
                cout<<" ";
            if(i==x)
                cout<<endl;
        }
        if(x==0)
            break;
    }
    return 0;
}
