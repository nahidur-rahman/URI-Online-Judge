#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],i,j,max=0,pos;
    for(i=0;i<100;i++)
        cin>>a[i];
    for(j=0;j<100;j++)
        if(a[j]>max)
        {
            max=a[j];
            pos=j+1;
        }
    cout<<max<<endl<<pos<<endl;

    return 0;
}

