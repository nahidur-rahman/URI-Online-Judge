#include<bits/stdc++.h>
using namespace std;

int main()
{
    float T,x,y;
    cin>>T;
    while(T--)
    {
        cin>>x>>y;
        if(y==0)
            cout<<"divisao impossivel"<<endl;
        else
            cout<<fixed<<setprecision(1)<<x/y<<endl;
    }
    return 0;
}
