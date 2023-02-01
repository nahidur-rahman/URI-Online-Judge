#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,c=0,r=0,s=0;
    float avc,avr,avs,total=0;
    cin>>n;
    int a[n];
    char t[n];
    for(i=0;i<n;i++)
        cin>>a[i]>>t[i];
    for(j=0;j<n;j++)
    {
        total=total+a[j];
        if(t[j]=='C')
            c=c+a[j];
        else if(t[j]=='R')
            r=r+a[j];
        else if(t[j]=='S')
            s=s+a[j];
    }
    avc=(c/total)*100;
    avr=(r/total)*100;
    avs=(s/total)*100;

    cout<<"Total: "<<total<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<c<<endl;
    cout<<"Total de ratos: "<<r<<endl;
    cout<<"Total de sapos: "<<s<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de coelhos: "<<avc<<" %"<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de ratos: "<<avr<<" %"<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de sapos: "<<avs<<" %"<<endl;

    return 0;
}
