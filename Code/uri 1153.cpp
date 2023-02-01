#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,fact=1;
    cin>>n;
    for(i=n;i>0;i--)
        fact=fact*i;
    cout<<fact<<endl;
    return 0;
}
