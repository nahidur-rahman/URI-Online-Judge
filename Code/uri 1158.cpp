#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,x,y,i,j;
    cin>>T;
    while(T--)
    {
        int sum=0;
        cin>>x>>y;
        for(i=0,j=x;i<(y*2);i++,j++)
            if(j%2!=0)
                sum=sum+j;
        cout<<sum<<endl;
    }
    return 0;
}
