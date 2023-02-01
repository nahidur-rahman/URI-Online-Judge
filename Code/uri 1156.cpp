#include<bits/stdc++.h>
using namespace std;

int main()
{
    float s=0.0,lob,hor=1.0;
    for(lob=1;lob<=39;lob+=2)
    {
        s=s+(lob/hor);
        hor=hor*2;
    }
    cout<<fixed<<setprecision(2)<<s<<endl;
    return 0;
}
