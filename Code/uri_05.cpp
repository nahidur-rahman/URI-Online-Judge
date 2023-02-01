#include<iostream>
using namespace std;

int main()
{
    int T,i,j,y;
    long int f[61];
    f[0]=0,f[1]=1;
    cin>>T;
    for(i=2;i<61;i++)
        f[i]=f[i-1]+f[i-2];
    for(j=0;j<T;j++)
    {
        cin>>y;
        cout<<"Fib("<<y<<") = "<<f[y]<<endl;
    }
}
