#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n[5],i,j,count=0;
    for(i=0;i<5;i++)
        cin>>n[i];
    for(j=0;j<5;j++)
        if(n[j]%2==0)
            count++;
    cout<<count<<" valores pares"<<endl;

    return 0;
}
