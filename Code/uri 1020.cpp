#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e;
    cin>>a;
    b=a/365;
    c=a%365;
    d=c/30;
    e=c%30;
    cout<<b<<" ano(s)"<<endl<<d<<" mes(es)"<<endl<<e<<" dia(s)"<<endl;
    return 0;
}

