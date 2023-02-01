#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,i;
    cin>>x;
    if(x%2!=0)
    {
        for(i=0;i<6;i++)
        {
            cout<<x<<endl;
            x=x+2;
        }
    }
    else
    {
        x=x+1;
        for(i=0;i<6;i++)
        {
            cout<<x<<endl;
            x=x+2;
        }
    }

    return 0;
}
