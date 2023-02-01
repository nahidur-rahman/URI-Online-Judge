#include<bits/stdc++.h>
using namespace std;

int main()
{
    float i,s=0.0;
    for(i=1.0;i<=100;i++)
        s=s+(1.0/i);
    cout<<fixed<<setprecision(2)<<s<<endl;
    return 0;
}
