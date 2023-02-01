#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    float a,b,c,sum,avg;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        sum=(a*2)+(b*3)+(c*5);
        avg=sum/10;
        cout<<fixed<<setprecision(1)<<avg<<endl;
    }

    return 0;
}
