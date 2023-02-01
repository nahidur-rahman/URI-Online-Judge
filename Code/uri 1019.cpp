#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e;
    cin>>a;
    b=a/3600;
    c=a%3600;
    d=c/60;
    e=c%60;
    cout<<b<<":"<<d<<":"<<e<<endl;
    return 0;
}
