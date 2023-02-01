#include<bits/stdc++.h>
using namespace std;

int main()
{
    float n,sum=0,count=0,avg;
    while(1)
    {
        cin>>n;
        if(n<0)
            break;
        sum=sum+n;
        count++;
    }
    avg=sum/count;
    cout<<fixed<<setprecision(2)<<avg<<endl;

    return 0;
}
