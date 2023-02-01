#include<bits/stdc++.h>
using namespace std;

int main()
{
    int count=0;
    float p[6],avg,sum=0.0;
    for(int i=0;i<6;i++)
        cin>>p[i];
    for(int i=0;i<6;i++)
    {
        if(p[i]>0)
        {
            count++;
            sum=sum+p[i];
        }
    }
    avg=sum/count;
    cout<<count<<" valores positivos"<<endl;
    cout<<fixed<<setprecision(1)<<avg<<endl;

    return 0;
}
