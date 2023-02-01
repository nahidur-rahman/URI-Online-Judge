#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d1,d2,h1,h2,m1,m2,s1,s2,d3,h3,m3,s3;
    cout<<"Dia ";
    cin>>d1;
    cin>>h1;
    cout<<" : ";
    cin>>m1;
    cout<<" : ";
    cin>>s1;
    cout<<"Dia ";
    cin>>d2;
    cin>>h2;
    cout<<" : ";
    cin>>m2;
    cout<<" : ";
    cin>>s2;

    if(h2<h1)
        d3=d2-d1-1;
    else
        d3=d2-d1;
    if(h1<h2)
        h3=h2-h1;
    else
        h3=24+h2-h1;
    if(m1<m2)
        m3=m2-m1;
    else
        m3=60+m2-m1;
    if(s1<=s2)
        s3=s2-s1;
    else
        s3=60+s2-s1;


    cout<<d3<<endl;
    cout<<h3<<endl;
    cout<<m3<<endl;
    cout<<s3<<endl;

    return 0;
}
