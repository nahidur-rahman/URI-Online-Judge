#include<bits/stdc++.h>
using namespace std;

int main()
{
    int j=0;
    float a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    if(a>0)
        j++;
    if(b>0)
        j++;
    if(c>0)
        j++;
    if(d>0)
        j++;
    if(e>0)
        j++;
    if(f>0)
        j++;
    cout<<j<<" valores positivos"<<endl;
    return 0;
}

