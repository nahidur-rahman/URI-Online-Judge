#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,t,f,tm;
    cin>>s>>t>>f;
    tm=s+t+f;
    if(tm>=24)
        cout<<tm-24<<endl;
    else if(tm<0)
        cout<<tm+24<<endl;
    else
        cout<<tm<<endl;
    return 0;
}
